%define TRUE 1
%define FALSE 0

%define MIN_LOW_ALPHA 97
%define MAX_LOW_ALPHA 122

section .text
	global ft_islower

ft_islower:
	enter 0, 0
	cmp rdi, MIN_LOW_ALPHA
	jl smash
	cmp rdi, MAX_LOW_ALPHA
	jg smash
	mov rax, TRUE
	jmp ret

smash:
	mov rax, FALSE

ret:
	leave
	ret
