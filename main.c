#include <stdio.h>
#include <inttypes.h>

double sum(double[], uint64_t);

int main() {
    int s1,s2;

    scanf("%d",&s1);
    scanf("%d",&s2);

    double test[] = {
        40.5, 26.7, 21.9, 1.5, -40.5, -23.4
    };
    
    printf("%.7f\n", sum(test, s2));
    
    return 0;

}