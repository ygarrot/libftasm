section .text
	global ft_memdel
	extern free

ft_memdel:
	enter 16, 0
	push rdi
	push qword [rdi]
	mov rdi, [rdi]
	call free
	pop rdi
	mov BYTE[rdi], 0

ret:
	leave
	ret
