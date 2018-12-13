
	; prologue
	push rbp
	mov rbp, rsp

	read:
	mov rax, 0x2000003
	push rdi
	lea rsi, [rel buffer]
	mov rdx, bufsize
	syscall
	jc err
	cmp rax, 0
	je end
	mov rdi, 1
	mov rdx, rax
	mov rax, 0x2000004
	syscall
	jc err
	pop rdi
	jmp read

	err:
	pop rdi
	mov rax, 1

	end:

	; epilogue
	mov rsp, rbp
	pop rbp

	ret

	section .data

	buffer times 255 db 0
	bufsize equ $ - buffer
