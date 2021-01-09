
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@main_body:
		MOV 	$-1,-8(%14)
@for0:
		CMPS	-8(%14),$5
		JGES	@exit0
		MOV 	$-1,-12(%14)
@for1:
		CMPS	-12(%14),$5
		JGES	@exit1
		MOV 	$5,-4(%14)
		ADDS	-12(%14),$1,-12(%14)
		JMP 	@for1
@exit1:
		ADDS	-8(%14),$1,-8(%14)
		JMP 	@for0
@exit0:
		MOV 	$2,-16(%14)
@for2:
		CMPS	-16(%14),$10
		JGES	@exit2
		ADDS	-4(%14),$1,%0
		MOV 	%0,-16(%14)
		ADDS	-16(%14),$1,-16(%14)
		JMP 	@for2
@exit2:
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET