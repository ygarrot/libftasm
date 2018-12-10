section .text
	global ft_memset
	extern printf 

ft_memset:

.fillit:
	cmp rdx, 0
	je .ret
	mov al, 34 
	mov byte[rdi], al
	;jmp .ret
	inc rdi
	dec rdx
	jmp ft_memset

.ret:
	mov rax, rdi
	;leave
	ret
