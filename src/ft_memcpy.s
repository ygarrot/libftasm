section .text
	global ft_memcpy

ft_memcpy:
	enter 0, 0
	push rdi
	mov rcx, rdx
	cld
	rep movsb
	pop rax

.ret:
	leave
	ret
