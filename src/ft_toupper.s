%define MIN_LOW_ALPHA 97
%define MAX_LOW_ALPHA 122

section .text
	global _ft_toupper

_ft_toupper:
.check:
	mov rax, rdi
	cmp rdi, MIN_LOW_ALPHA
	jl .ret
	cmp rdi, MAX_LOW_ALPHA
	jg .ret
	jz .to_upper

.to_upper:
	sub rax, 32
	ret

.ret:
	ret
