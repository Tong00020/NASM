bits 64
extern number
extern number2

section .text
global subs
global soma

soma:
  call number
  mov ebp, eax
  call number2
  add ebp, eax
  mov eax,ebp
  ret
