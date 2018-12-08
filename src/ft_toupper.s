%include "src/ft_isalpha.s"
section .text
	global _ft_toupper

_ft_toupper:
.check:
	call _ft_islower
	cmp eax, 1 
	mov rax, rdi
	jz .to_upper
	ret

.to_upper:
	sub rax, 32
	ret

