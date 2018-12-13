section .text
	global ft_strdup
	extern ft_strlen
	extern ft_memcpy
	extern malloc

ft_strdup:
	enter 0, 0
	push rdi
	call ft_strlen
	mov rdi, rax
	inc rdi
	push rdi
	call malloc
	cmp rax, 0
	jz ret
	pop rdx
	mov rdi, rax
	pop rsi
	call ft_memcpy

ret:
	leave
	ret
