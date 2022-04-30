#include <stdio.h>
#include <inttypes.h>

double sum(double[], uint64_t);

int main() {
    int s1,s2;

    //printf("Deseja somar ou subtrai?\n\n 1-Soma \n 2-Subtrai\n\n");
    scanf("%d",&s1);
    scanf("%d",&s2);

    double test[] = {
       s1, s2
    };
    
    printf("%.7f\n", sum(test, 2));
    
    return 0;

}