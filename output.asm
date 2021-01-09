
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$2,-4(%14)
		MOV 	$0,-8(%14)
@check0:
@when_check0:
		CMPS	-4(%14),$1
		JEQ		@when0
		JMP 	@when_check1
@when0:
		ADDS	-8(%14),$66,%0
		MOV 	%0,-8(%14)
		JMP 	@when1
@when_check1:
		CMPS	-4(%14),$3
		JEQ		@when1
		JMP 	@when_check2
@when1:
		ADDS	-8(%14),$3,%0
		MOV 	%0,-8(%14)
		JMP 	@check_exit0
@when_check2:
@otherwise2:
		MOV 	$2,-12(%14)
@for1:
		CMPS	-12(%14),$10
		JGES	@exit1
		ADDS	-8(%14),$1,%0
		MOV 	%0,-8(%14)
		ADDS	-12(%14),$1,-12(%14)
		JMP 	@for1
@exit1:
@when2:
		JMP 	@check_exit0
@check_exit0:
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET