bits 64
global  sum
        section .text
sum:
        xorpd   xmm0, xmm0              ; inicializa com 0
        cmp     rsi, 0                  ; caso length = 0
        je      done
next:
        addsd   xmm0, [rdi]             ; adiciona
        add     rdi, 8                  ; move to next array element
        dec     rsi                     ; count down
        jnz     next                    ; testa de continua
done:
        ret                             ; retorna valor