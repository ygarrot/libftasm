%define TRUE 1
%define FALSE 0

%define MIN_UP_ALPHA 65
%define MAX_UP_ALPHA 90

section .text
	global _ft_isupper

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
