section .text
	global ft_memcpy

ft_memcpy:
	enter 16, 0
bp6:
	push rdi
	mov rcx, rdx
	cld
	rep movsb
	pop rax

.ret:
	leave
	ret
