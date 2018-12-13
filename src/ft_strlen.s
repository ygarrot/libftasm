section .text
	global ft_strlen

ft_strlen:
	enter 16, 0

.init:
	mov rcx, -1
	mov rsi, rdi
	xor al, al

.len:
	cld
	repne scasb
	sub rdi, rsi
	dec rdi
	mov rax, rdi

.ret:
	leave
	ret
