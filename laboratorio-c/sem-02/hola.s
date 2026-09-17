	.file	"hola.c"
	.text
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii "Hola Mundo!\12\0"
	.align 8
.LC2:
	.ascii "------------------------------------\12\0"
.LC3:
	.ascii "Edad:\0"
.LC4:
	.ascii "%-10s %d anios\12\0"
.LC5:
	.ascii "Altura:\0"
.LC6:
	.ascii "%-10s %.2f metros\12\0"
.LC7:
	.ascii "Inicial:\0"
.LC8:
	.ascii "%-10s %c\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$21, -4(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -8(%rbp)
	movb	$75, -9(%rbp)
	leaq	.LC1(%rip), %rcx
	call	printf
	leaq	.LC2(%rip), %rcx
	call	printf
	movl	-4(%rbp), %eax
	movl	%eax, %r8d
	leaq	.LC3(%rip), %rdx
	leaq	.LC4(%rip), %rcx
	call	printf
	pxor	%xmm0, %xmm0
	cvtss2sd	-8(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm0
	movapd	%xmm0, %xmm2
	movq	%rax, %r8
	leaq	.LC5(%rip), %rdx
	leaq	.LC6(%rip), %rcx
	call	printf
	movsbl	-9(%rbp), %eax
	movl	%eax, %r8d
	leaq	.LC7(%rip), %rdx
	leaq	.LC8(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC0:
	.long	1070386297
	.ident	"GCC: (tdm64-1) 10.3.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
