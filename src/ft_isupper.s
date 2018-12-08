%define TRUE 1
%define FALSE 0

%define MIN_UP_ALPHA 97
%define MAX_UP_ALPHA 122

section .text
global _ft_isalpha

_ft_isupper:
	cmp rdi, MIN_UP_ALPHA
	jl .smash
	cmp rdi, MAX_UP_ALPHA
	jg .smash
	jmp .pass

.smash:
	mov eax, FALSE
	ret

.pass:
	mov eax, TRUE
	ret
