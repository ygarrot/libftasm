%include "src/ft_islower.s"
section .text
	global _ft_toupper

_ft_toupper:
.check:
	call _ft_islower
	cmp eax, 0
	jz .ret 

.to_upper:
	mov eax, [rel rdi]
	ret

.ret:
	ret
