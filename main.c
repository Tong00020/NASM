#include <stdio.h>

int soma();
//int subs();

int number(int a){
  return a;
}

int number2(int a){
  return a;
}

int main(void){
    int s1,s2;

    scanf("%d",&s1);
    scanf("%d",&s2);
    number(s1);
    number2(s2);

    printf("Soma: %d\n", soma());

    printf("oi\n");
    //printf("Subtração: %d\n", subs());
    return 0;
}
