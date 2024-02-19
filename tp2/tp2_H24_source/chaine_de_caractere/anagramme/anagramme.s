.data
string1:
.asciz  "chien" 
lenght1:
.int 5
string2:
.asciz  "niche"
lenght2:
.int 5

.text
.globl anagramme
main:
anagramme: 

##VOTRE CODE ICI



movl $0x00, %eax
movl $string1, %edx


iteration:
movl (%edx), %eax
addl $0x01, %edx
jmp iteration

ret
push %eax
