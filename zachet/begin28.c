#include<stdio.h>

int main()
{
    float C, F;
    printf("Введите температуру по Цельсию: "); scanf("%f", &C);
    F=((9.0/5.0)*C)+32.0;
    printf("%f\n",F);
    return 0;
}
