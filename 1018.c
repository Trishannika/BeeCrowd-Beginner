
#include<stdio.h>
int main ()
{
    int A;
    scanf("%d",&A);
    printf("%d\n",A);
    printf("%d nota(s) de R$ 100,00\n", A/100);
    A = (A%100);
    printf("%d nota(s) de R$ 50,00\n", A/50);
    A = (A%50);
    printf("%d nota(s) de R$ 20,00\n", A/20);
    A = (A%20);
    printf("%d nota(s) de R$ 10,00\n", A/10);
    A = (A%10);

    printf("%d nota(s) de R$ 5,00\n", A/5);
    A = (A%5);

    printf("%d nota(s) de R$ 2,00\n", A/2);
    A = (A%2);

    printf("%d nota(s) de R$ 1,00\n", A/1);
    return 0;
}
