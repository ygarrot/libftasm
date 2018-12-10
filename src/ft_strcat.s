section .data
format db "%s", 0xa

section .text
	global ft_strcat
	extern printf
	
ft_strcat:
	enter 0, 0
	cmp byte[rdi], 0
	jz .ret
	call .copy
	inc	rdi
	mov	byte[rdi], 0
	mov	rax, rdi
	jmp	.ret

.copy:
	cmp byte[rsi], 0
	je .ret
	mov al, byte[rsi]
	mov byte[rdi], al
	inc rdi
	inc rsi
	jmp .copy

.ret:
	leave
	ret

