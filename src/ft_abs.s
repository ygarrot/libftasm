section .text
	global ft_abs

ft_abs:
	enter 0, 0
	mov eax, dil 
	xor edx, edx 
bp1:
	sar eax, 0x1f
	bp2:
	xor eax, edx
	sub eax, edx
	leave
	ret
