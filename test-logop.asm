
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@main_body:
@if0:
		CMPS 	-4(%14),$1
		CMPS 	-4(%14),$1
		CMPS 	-4(%14),$1
		JGES	@false0
@true0:
		MOV 	-4(%14),%13
		JMP 	@main_exit
		JMP 	@exit0
@false0:
		MOV 	-4(%14),%13
		JMP 	@main_exit
@exit0:
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET