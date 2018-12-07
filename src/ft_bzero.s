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
	sub rsp, 16
	lea rdi, [rel hello.string]
	call _printf
	leave
	ret
