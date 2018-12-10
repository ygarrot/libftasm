%define TRUE 1
%define FALSE 0

section .text 
	global ft_basic

ft_basic:
.smash:
	mov eax, FALSE
	ret

.pass:
	mov eax, TRUE
	ret
