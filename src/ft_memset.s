section .text
	global ft_memset

ft_memset:
	enter 0, 0
	mov al, sil
	mov rcx, rdx
	cld
	rep stosb
	pop rax

ret:
	leave
	ret
