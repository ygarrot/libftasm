section .text
	global _main
_main:
mov edi,10 ; ten integers in our array
imul edi,4 ; multiply by 4 to get a byte count
extern _malloc
call malloc
; rax is a pointer to the allocated space
mov rdi,10; n
mov rcx,0 ; i
jmp testloop
initloop:
mov DWORD[rax+4*rcx],ecx; write to integer at index rcx
add rcx,1 ; i++
testloop:
cmp rcx,rdi
jl initloop

mov eax,DWORD[rax+4*7] ; pull out the integer at index 7
ret
