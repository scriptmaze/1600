.data
strings:
.asciz "Allo Hi"
num:
.asciz "Allo"
den:
.asciz "Hi"
.text
.globl main


main : 
push %ebp
mov %esp,%ebp
push %ebx

mask:
xor %eax, %eax          #eax, ebx et ecx = 00000
xor %ecx, %ecx
xor %ebx, %ebx

setup:
movl $strings, %esi     

n_c:
lodsb                  

d:              
cmp $0x20, %al         # when %al = 0x20,
je n_c2                # jump to n_c2|||
cmp $0x41, %al         # when %al is below 0x41,
jb n_c2                # jump to n_c2|||
cmp $0x5A, %al         # when 
jb a
cmp $0x61, %al
jb n_c2
cmp $0x7A, %al 
jbe a

a:              #add
addl %eax, %ecx
jmp n_c

n_c2:
lodsb

d2:
cmp $0,%al
jz r
cmp $0x41, %al
jb n_c2
cmp $0x5A, %al
jb a_2
cmp $0x61, %al
jb n_c2
cmp $0x7A, %al 
jbe a_2

a_2:
addl %eax, %ebx
jmp n_c2

r:
movl %ecx, %eax

divl %ebx
cmp $0x00, %eax
jmp e_n
je e_d              
             

e_n:
push $num
call printf
 
jmp bye

e_d:
push $den
call printf


bye:
popl %ebx
popl %ebp
ret



