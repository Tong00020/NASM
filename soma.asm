bits 64
global  sum
        section .text
sum:
        xorpd   xmm0, xmm0              ; inicializa com 0
       
next:
        addsd   xmm0, [rdi]             ; adiciona
        add     rdi, 8                  ; ir ao próximo elemento
        dec     rsi                     ; contagem
        jnz     next                    ; testa de continua
        ret                             ; retorna valor
