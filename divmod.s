	.file	"divmod.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"base random value = %d\n"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC2:
	.string	"mod 100 result = %d\n randv = %d\n"
	.align 8
.LC3:
	.string	" integer result for integer division = %d\n"
	.align 8
.LC4:
	.string	" naive float result for integer division = %f\n"
	.align 8
.LC5:
	.string	" float result for float in numerator division = %0.4f\n"
	.align 8
.LC6:
	.string	" float result for float in denominator division = %0.4f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB39:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$24, %rsp
	.cfi_def_cfa_offset 48
	movl	$1951, %edi
	call	srand
	call	rand
	movl	%eax, %ebx
	movl	%eax, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movl	$1374389535, %ebp
	movl	%ebx, %eax
	imull	%ebp
	sarl	$5, %edx
	movl	%edx, %ebp
	movl	%ebx, %ecx
	sarl	$31, %ecx
	subl	%ecx, %edx
	imull	$100, %edx, %eax
	movl	%ebx, %edx
	subl	%eax, %edx
	subl	%ecx, %ebp
	cvtsi2sd	%ebp, %xmm2
	movsd	%xmm2, 8(%rsp)
	cvtsi2sd	%ebx, %xmm0
	movapd	%xmm0, %xmm1
	divsd	.LC1(%rip), %xmm1
	movsd	%xmm1, (%rsp)
	movl	%ebx, %ecx
	movl	$.LC2, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movl	%ebp, %edx
	movl	$.LC3, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movsd	8(%rsp), %xmm0
	movl	$.LC4, %esi
	movl	$1, %edi
	movl	$1, %eax
	call	__printf_chk
	movsd	(%rsp), %xmm0
	movl	$.LC5, %esi
	movl	$1, %edi
	movl	$1, %eax
	call	__printf_chk
	movsd	(%rsp), %xmm0
	movl	$.LC6, %esi
	movl	$1, %edi
	movl	$1, %eax
	call	__printf_chk
	movl	$0, %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 24
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
.LC1:
	.long	0
	.long	1079574528
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
