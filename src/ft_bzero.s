section .text
	global ft_bzero

ft_bzero:
	cmp rsi, 0
	jz .ret
	dec rsi
	mov byte [rdi + rsi], 0
	jmp ft_bzero

.ret:
	ret
