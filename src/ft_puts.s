%define MACH_SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4

section .data
resMsg db 0xA, 0xD
error:
		.string: db "(null)", 0xA
		.len: equ $ - error.string

section .text
	global ft_puts
	extern ft_strlen

ft_puts:
	enter 0, 0
	cmp rdi, 0
	je err
	push rdi
	call ft_strlen
	pop rsi
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	lea rsi, [rel resMsg]
	mov rdi, STDOUT
	mov rdx, 1 
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jmp ret

err:
	lea rsi, [rel error.string]
	mov rdi, STDOUT
	mov rdx, error.len 
	mov rax, MACH_SYSCALL(WRITE)
	syscall

ret:
	mov rax, 10
	leave
	ret
