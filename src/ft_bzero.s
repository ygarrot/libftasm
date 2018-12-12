section .text
	global ft_bzero

ft_bzero:
	;enter 0, 0
	cmp rsi, 0
	jz .ret
	dec rsi
	mov byte [rdi + rsi], 0
	jmp ft_bzero

.ret:
	;leave
	ret
