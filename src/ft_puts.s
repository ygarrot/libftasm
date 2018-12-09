%define MACH_SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4

section .data

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	push rdi
	call _ft_strlen
	pop rdi
	mov rsi, rdi
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall

.exit:
	ret

