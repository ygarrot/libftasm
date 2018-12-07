section .data
hello:
	.string db "Hello World!", 12
	.len equ $ - hello.string

section .text
	global _ft_bzero
	extern _printf

_ft_bzero:
	push rbp
	mov rbp, rsp
	mov ecx, 16

.loop
	jmp .loop
	mov rsp, rbp
	pop rbp
	ret
