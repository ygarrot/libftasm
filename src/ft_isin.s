%define TRUE 1
%define FALSE 0

section .text
	global ft_isin
	extern ft_strlen

ft_isin:
	enter 0, 0
	cmp BYTE[rsi], 0
	je smash

save:
	push rdi
	push rsi
	mov rdi, rsi
	call ft_strlen

recover:
	pop rdi
	pop rsi

find:
	mov al, sil 
	mov rcx, rax
	repne scasb
	cmp rcx, 0
	je smash
	mov rax, TRUE
	jmp ret

smash:
	mov rax, FALSE

ret:
	leave
	ret
