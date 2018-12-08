%define TRUE 1
%define FALSE 0

section .text 
	global _ft_basic

_ft_basic:
.smash:
	mov eax, FALSE
	ret

.pass:
	mov eax, TRUE
	ret
