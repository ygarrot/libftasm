%define TRUE 1
%define FALSE 0

%define MIN_LOW_ALPHA 97
%define MAX_LOW_ALPHA 122

section .text
	global _ft_islower

_ft_islower:
	cmp rdi, MIN_LOW_ALPHA
	jl .smash
	cmp rdi, MAX_LOW_ALPHA
	jg .smash
	jmp .pass

.smash:
	mov eax, FALSE
	ret

.pass:
	mov eax, TRUE
	ret