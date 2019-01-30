section .text
	global ft_strcpy

ft_strcpy:
	enter 16, 0
	push rdi
	mov rcx, rdx
	cld
	rep movsb
	pop rax

ret:
	leave
	ret
