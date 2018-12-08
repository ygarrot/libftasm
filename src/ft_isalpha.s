%define MIN_LOW_ALPHA 65
%define MAX_LOW_ALPHA 90

%include "src/ft_isupper.s"
section .text
	global _ft_isalpha

_ft_isalpha:
.lower:
	cmp rdi, MIN_LOW_ALPHA
	jl .smash
	cmp rdi, MAX_LOW_ALPHA
	jg .upper
	jmp .pass

.upper:
	call _ft_isupper
	jmp .tern

.pass:
	mov eax, TRUE
	ret

.smash:
	mov eax, FALSE
	ret

.tern:
	cmp eax, 0
	jz .smash
	jnz .pass
