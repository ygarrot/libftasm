%define TRUE 1
%define FALSE 0
%define MIN_LOW_ALPHA 65 
%define MAX_LOW_ALPHA 90
%define MIN_UP_ALPHA 97
%define MAX_UP_ALPHA 122

section .text
	global _ft_isalpha

_ft_isalpha:
.LOWER
	cmp rdi, MIN_LOW_ALPHA
	jl .ELSE
	cmp rdi, MAX_LOW_ALPHA
	jg .UPPER
	jmp .END
	ret

.UPPER:
	cmp rdi, MIN_UP_ALPHA
	jl .ELSE
	cmp rdi, MAX_UP_ALPHA
	jg .ELSE
	jmp .END

.END:
	mov eax, TRUE
	ret

.ELSE:
	mov eax, FALSE
	ret


