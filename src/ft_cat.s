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
	mov r14, rdi
	lea rsi, [rel buf]
	;read(fd, buff_size, buf)
.read:
	mov rdi, r14
	mov rdx, bufsize
	mov rax, MACH_SYSCALL(READ)
	syscall
	jc .err
	cmp rax, 0
	je .ret

	;write(fd, buf, buff_size)
.write:
	mov rdi, STDIN
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jc .err
	jmp .read

.err:
	mov rax, 1

.ret:
	leave
	ret

