#include <stdio.h>
#include <inttypes.h>

double sum(double[], uint64_t);

int main() {
    int s1,s2,flag,flag2,cont=0;


    while(cont==0){
      printf("\nDeseja somar ou subtrai?\n 1-Soma \n 2-Subtrai\n");
      scanf("%d",&flag);
      while(flag!=1 && flag!=2){
        printf("Erro! Coloque 1 ou 2.\n");
        scanf("%d",&flag);
      }

      printf("Insira dois valores: ");
      scanf("%d",&s1);
      scanf("%d",&s2);

      if(flag==2){
        s2=s2*(-1);
      }

      double test[] = {
        s1, s2
      };
      
      printf("%.3f\n\n", sum(test, 2));

      printf("Deseja continuar?\n1-Sim\n2-Não\n");

      scanf("%d",&flag2);

      while(flag2!=1 && flag2!=2){
        printf("Erro! Coloque 1 ou 2.\n");
        scanf("%d",&flag2);
      }

      if(flag2==2){
        cont=1;
      }
    }

    return 0;

}