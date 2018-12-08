%define MIN_UP_ALPHA 65
%define MAX_UP_ALPHA 90

%include "src/ft_islower.s"

section .text
	global _ft_isalpha

_ft_isalpha:
.upper:
	cmp rdi, MIN_UP_ALPHA
	jl .smash
	cmp rdi, MAX_UP_ALPHA
	jg .lower
	jmp .pass

.lower:
;	call _ft_islower
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
