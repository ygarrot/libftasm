section .text
	global ft_strcpy
	extern ft_memcpy
	extern ft_strlen

ft_strcpy:
	enter 16, 0
	mov r12, rdi
	mov rdi, rsi
	call ft_strlen
	mov rdi, r12
	inc rax
	mov rdx, rax 
	call ft_memcpy

ret:
	leave
	ret
