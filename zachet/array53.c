#include<stdio.h>
int main()
{
    int n, k;
    printf("введите размерность: "); scanf("%d", &n);
    float a[n], b[n], c[n];
    for (k=0; k<n; ++k)
    {
        printf("a[%d] : ", k+1);
        scanf("%f", &a[k]);
    }

    for (k=0; k<n; ++k)
    {
        printf("b[%d] : ", k+1);
        scanf("%f", &b[k]);
    }


    for (k=0; k<n; ++k)
    {
        if (a[k]>b[k])
            c[k]=a[k];
        else 
            c[k]=b[k];
    }

    printf("массив С \n");
    for(k=0; k<n; ++k)
        printf("  %d: %f\n", k+1, c[k]);
    return 0;
}
