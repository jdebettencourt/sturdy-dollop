	.file	"guessfix.c"
	.section	.rodata
.LC0:
	.string	"\nInteger GUESSING Game \007\n"
	.align 8
.LC1:
	.string	"Let's play guess the integer - only use numbers from 1 to 100."
	.align 8
.LC2:
	.string	"Enter your guess as an integer, followed by -ENTER- please:"
.LC3:
	.string	"%d"
.LC4:
	.string	"This value is too big!"
.LC5:
	.string	"This value is too small!"
	.align 8
.LC6:
	.string	"Looks like you now know the answer! %d \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$.LC0, %edi
	call	puts
	movl	$.LC1, %edi
	call	puts
	movl	$.LC2, %edi
	call	puts
	movl	$42, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L2
.L6:
	leaq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jne	.L3
	jmp	.L4
.L3:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jle	.L5
	movl	$.LC4, %edi
	call	puts
	jmp	.L2
.L5:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jge	.L2
	movl	$.LC5, %edi
	call	puts
.L2:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jne	.L6
.L4:
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
