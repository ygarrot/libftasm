%define TRUE 1
%define FALSE 0

%define MIN_UP_ALPHA 65
%define MAX_UP_ALPHA 90
%define MIN_LOW_ALPHA 97
%define MAX_LOW_ALPHA 122

section .text
	global ft_isalpha

ft_isalpha:
.upper:
	cmp rdi, MIN_UP_ALPHA
	jl .smash
	cmp rdi, MAX_UP_ALPHA
	jg .lower
	jmp .pass

.lower:
	cmp rdi, MIN_LOW_ALPHA
	jl .smash
	cmp rdi, MAX_LOW_ALPHA
	jg .smash
	jmp .pass

.pass:
	mov eax, TRUE
	ret

.smash:
	mov eax, FALSE
	ret
