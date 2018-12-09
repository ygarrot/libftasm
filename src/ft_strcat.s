section .data
hello:
	.string db "hello", 10
	.len equ $ - hello.string

section .text
	global _ft_strcat
	extern _printf

_ft_strcat:
	;add rdi, "test"
	push rbp
	mov rbp, rbp
	sub rsp, 16 
	sub rsi, rsi
	call _printf
	leave
	ret
