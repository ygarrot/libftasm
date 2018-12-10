section .text
	global ft_strlen

ft_strlen:
	mov rcx, -1
	mov rsi, rdi
	mov al, 0
	cld
	repne scasb
	sub rdi, rsi
	dec rdi
	mov rax, rdi
	;leave
	ret
