section .text
	global ft_memdel
	extern free

ft_memdel:
	enter 8, 0
	push rdi
	mov rdi, [rdi]
	call free
	pop rdi
	mov rdi, [rdi]
	mov BYTE[rdi], 0

ret:
	leave
	ret
