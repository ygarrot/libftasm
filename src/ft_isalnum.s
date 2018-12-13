section .text
	global ft_isalnum
	extern ft_isalpha
	extern ft_isdigit

ft_isalnum:
	enter 0, 0
	call ft_isalpha
	cmp rax, 0
	je .ret
	call ft_isdigit

.ret:
	leave
	ret
