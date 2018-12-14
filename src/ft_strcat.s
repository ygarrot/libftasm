section .text
	global ft_strcat

ft_strcat:
	enter 0, 0
	cmp byte[rdi], 0
	je exit
	call copy
	inc rdi
	mov byte[rdi], 0
	mov rax, rdi
	jmp exit 

copy:
	cmp byte[rsi], 0
	je exit
	mov al, byte[rsi]
	mov byte[rdi], al
	inc rdi
	inc rsi
	jmp copy

exit:
	leave
	ret

