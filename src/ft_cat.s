%define MACH_SYSCALL(nb) 0x2000000 | nb
%define READ 3
%define WRITE 4
%define STDIN 1 

section .data
	buf times 255 db 0
	bufsize equ $ - buf

section .text
global ft_cat

ft_cat:
	enter 0, 0
	push rdi
	;read(fd, buff_size, buf)
.read:
	lea rsi, [rel buf]
	mov rdx, bufsize
	mov rax, MACH_SYSCALL(READ)
	syscall
	cmp rax, 0
	jle .ret

	;write(fd, buf, buff_size)
.write:
	mov rdx, rax
	mov rdi, STDIN
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	pop rdi
	jmp .read

.ret:
	leave
	ret

