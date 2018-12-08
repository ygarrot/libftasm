%define TRUE 1
%define FALSE 0
%define MIN_LOW_ALPHA 65
%define MAX_LOW_ALPHA 90
%define MIN_UP_ALPHA 97
%define MAX_UP_ALPHA 122

section .text
	global _ft_isalpha

_ft_isalpha:
.lower
	cmp rdi, MIN_LOW_ALPHA
	jl .else
	cmp rdi, MAX_LOW_ALPHA
	jg .upper
	jmp .end

.upper:
	cmp rdi, MIN_UP_ALPHA
	jl .else
	cmp rdi, MAX_UP_ALPHA
	jg .else
	jmp .end

.end:
	mov eax, TRUE
	ret

.else:
	mov eax, FALSE
	ret
