#include<stdio.h>
#include<math.h>

int main()
{
    float x;
    printf("Введите х: "); scanf("%f",&x);
    if (x>0) 
    {
        printf("f(x) = %f\n", 2*sin(x));
    }
    else 
    {
        printf("f(x) = %f\n", 6-x);
    }
    return 0;
}
