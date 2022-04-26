bits 64
extern number
extern number2

section .text

global subs
subs:
  call number
  mov ebp, eax
  call number2
  sub ebp, eax
  mov eax,ebp
  ret