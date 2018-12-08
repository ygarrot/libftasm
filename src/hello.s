section .data
hello:
	.string db "Hello World!", 12
	.len equ $ - hello.string

section .text
	global _pop
	extern _printf

_pop:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	lea rdi, [rel hello.string]
	call _printf
	leave
	ret

%define MACH_SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4

section .data
hello:
	.string db "Hello World!", 10
	.len equ $ - hello.string

section .text
	global _ft_bzero
	global start
	extern _printf

start: 
	call _ft_bzero
	ret

_ft_bzero:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	mov rdi, STDOUT
	lea rsi, [rel hello.string]
	mov rdx, hello.len 
	push rdi
	push rsi
	push rdx
	;mov rax, MACH_SYSCALL(WRITE)
	;syscall
	mov cx, 3
	call my_loop
	leave
	ret

my_loop:
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	pop rdi
	pop rsi
	pop rdx
	dec cx
	jnz my_loop

%define MACH_SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4

section .data
hello:
	.string db "Hello World!", 10
	.len equ $ - hello.string
print:
	.string db  "%d", 0xa
section .text
	global _ft_bzero
	global start
	extern _printf

start: 
	call _ft_bzero
	ret

_ft_bzero:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	mov rdi, print.string
	mov rsi, 20
	call _printf
	leave
	ret
