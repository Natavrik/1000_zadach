#include<stdio.h>
int main()
{
    int N, k=2, f=0, f1=1, f2=1;
    printf("введите число N: "); scanf("%d", &N);
    while (f<N)
    {
        ++k;
        f=f2+f1;
        f2=f1;
        f1=f;
    }
    printf("Порядковый номер числа Фиббоначи: %d\n", k);
    return 0;
}
