%define TRUE 1
%define FALSE 0

section .text
	global ft_isin
	extern ft_strlen
	extern ft_puts

ft_isin:
	enter 0, 0
	cmp BYTE[rsi], 0
	je smash

save:
	push rdi ;/push char
	;mov al, dil ;al = dil
	mov rdi, rsi ;/rdi = rsi
	call ft_strlen

recover:
	pop rdi ;/rdi = rsi
	mov rcx, rax

find:
	mov al, dil ;al = dil
	mov rdi, rsi
	cld
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
