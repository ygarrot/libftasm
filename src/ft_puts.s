%define MACH_SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4

section .data

section .text
	global ft_puts
	extern ft_strlen

ft_puts:
	push rdi
	call ft_strlen
	pop rdi
	mov rsi, rdi
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall

.exit:
	ret
