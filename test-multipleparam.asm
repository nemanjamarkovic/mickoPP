
fun:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@fun_body:
		MOV 	12(%14),8(%14)
		MOV 	-4(%14),16(%14)
		MOV 	$0,%13
		JMP 	@fun_exit
@fun_exit:
		MOV 	%14,%15
		POP 	%14
		RET
fun2:
		PUSH	%14
		MOV 	%15,%14
@fun2_body:
		MOV 	8(%14),%13
		JMP 	@fun2_exit
@fun2_exit:
		MOV 	%14,%15
		POP 	%14
		RET
fun3:
		PUSH	%14
		MOV 	%15,%14
@fun3_body:
		MOV 	8(%14),%13
		JMP 	@fun3_exit
@fun3_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@main_body:
		ADDS	-4(%14),$1,-4(%14)
			PUSH	-12(%14)
			PUSH	-8(%14)
			PUSH	-4(%14)
			CALL	fun
			ADDS	%15,$12,%15
		MOV 	%13,%0
		MOV 	%0,-4(%14)
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET