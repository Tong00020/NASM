bits 64
extern number
extern number2

section .text

global sum
sum:
  call number
  mov ebx, eax ; numero no registrador AL
  call number2
  add eax, ebx  ; adiciona AL e BL
  ;daa         ; adjuste decimal
  mov eax, eax ; coloca resultado do registrador AL no offset 600
  ;mov AL, 00  ; zera registro AL
  ;adc AL, AL  ; adiciona valores de registrador AL to AL com carry
  ;mov [601], AL ; guarda valores do registrador AL to offset 601
  ;mov eax,[600]
  ret
