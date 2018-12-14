section .text
	global ft_memalloc
	extern malloc
	extern ft_bzero

ft_memalloc:
	enter 8, 0
	push rdi
	call malloc
	pop rsi
	cmp rax, 0
	jz ret
	mov rax, rdi
	call ft_bzero

ret:
	leave
	ret
