	.file	"idiv_imult.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"base random value = %d\n"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC1:
	.string	"mod 100 result = %d\n randv = %d\n"
	.align 8
.LC2:
	.string	" integer division result = %d\n"
	.align 8
.LC3:
	.string	" std naive division result = %f\n"
	.align 8
.LC5:
	.string	" test float division result = %0.4f\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB39:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movl	$1951, %edi
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	movl	$1374389535, %ebx
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	call	srand
	call	rand
	movl	$.LC0, %esi
	movl	%eax, %ebp
	movl	%eax, %edx
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk
	movl	%ebp, %eax
	movl	%ebp, %ecx
	movl	$.LC1, %esi
	imull	%ebx
	movl	%ebp, %eax
	movl	$1, %edi
	sarl	$31, %eax
	movl	%edx, %ebx
	movl	$100, %edx
	sarl	$5, %ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	imull	%edx, %eax
	movl	%ebp, %edx
	subl	%eax, %edx
	xorl	%eax, %eax
	call	__printf_chk
	movl	%ebx, %edx
	movl	$.LC2, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk
	cvtsi2sd	%ebx, %xmm0
	movl	$.LC3, %esi
	movl	$1, %edi
	movl	$1, %eax
	call	__printf_chk
	cvtsi2sd	%ebp, %xmm0
	movl	$.LC5, %esi
	movl	$1, %edi
	movl	$1, %eax
	divsd	.LC4(%rip), %xmm0
	call	__printf_chk
	addq	$8, %rsp
	.cfi_def_cfa_offset 24
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE39:
	.size	main, .-main
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC4:
	.long	0
	.long	1079574528
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
