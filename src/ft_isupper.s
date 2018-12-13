%define TRUE 1
%define FALSE 0

%define MIN_UP_ALPHA 65
%define MAX_UP_ALPHA 90

section .text
	global ft_isupper

ft_isupper:
	enter 0, 0
	cmp rdi, MIN_UP_ALPHA
	jl .smash
	cmp rdi, MAX_UP_ALPHA
	jg .smash
	mov eax, TRUE
	jmp .pass

.smash:
	mov eax, FALSE

.pass:
	leave
	ret
