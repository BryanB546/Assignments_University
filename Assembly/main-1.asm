.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode: DWORD
.data
    
; define your variables here
fact_input		dword 12
fact_result		dword 0 ;Results of Factorial
fibonacci		dword 12 ;counter for fibonacci
fib_sequence	dword 0 ;results of the fib sequence
VAR_1       dword 1
VAR_2       dword 0
array dword 7 dup(0,1,1,2,3,5,8,?,?,?,?,?)

.code
main PROC

; Assembly code
mov ecx, fibonacci ;Moves fibonacci into ecx
mov esi, OFFSET array ; indicates the distance with offset array which then moves the value of array into esi
add esi, TYPE array ; Type returns the size of the bytes in the array then add array value into esi
add esi, TYPE array ; Type returns the size of the bytes in the array then add array value into esi

L1:
mov eax, [esi-4] ;Moves 4 memory bytes from memory address esi into eax
mov ebx, [esi-8] ;Moves 8 memory bytes from memory address esi into eax
add eax, ebx    ; adds ebx value to eax
mov [esi], eax  ; moves value of eax into esi
mov fib_sequence, eax   ;Value of eax gets moved to fib_sequence
add esi, TYPE array     ;Returns the size of bytes in the array then adds the value of array into esi
Loop L1             ;loops back to L1




; Factorial Below

; Assembly code for Factorial Below
     

; First Loop of itereation for factorial

    mov ecx, VAR_1 ; moves Value of Var_1 into ecx
Loop1:
mov eax, fact_input ;Moves fact_input value into register eax
sub fact_input, 1 ;Subtracts 1 from Factorial_input
 cmp fact_input, 0 ;Compares factorial input to 0 and if it equals to 0 it'll exit the execution
    je EXIT
    imul eax, fact_input ;Multiplies factorial input with eax
    mov fact_result, eax ;Moves value stored in register eax into fact_result
    mov ecx, fact_result ;Moves value from fact_result into ecx
    mov eax, VAR_1 ;Variable 1  value gets moved to eax
    jmp Loop2 ; jumos back to Loop 2

; Remaining iterations for Factorial (11,10,9,...)
Loop2:
    mov eax, fact_input ;Moves value stored in fact_into eax
    sub fact_input, 1 ;Subtracts one from fact_input
    cmp fact_input, 0 ;Compares factorial input to 0 
    je EXIT
    imul ecx, fact_input ;Multiplies factorial input value to ecx
    mov fact_result, ecx ;Moves value stored in ecx to fac_result
    jmp Loop2 ;Jumps to Loop 2
EXIT:
ret


INVOKE ExitProcess, 0
main ENDP
END main