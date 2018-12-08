section .text
global _ft_bzero
_ft_bzero:
.loop:
	dec rsi
	cmp rsi, 0
	jl .ret
	mov byte [rdi+rsi], 0
	jmp .loop
.ret:
	ret
