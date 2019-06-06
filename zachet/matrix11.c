/* дана матрица М*N вывести её элемнты 1 строка с-п
2 строка п-л
3 строка с-п и т.д. */
#include<stdio.h> 

int main()
{
    int M, N, i, j;
    // ввод элементов массива
    printf("Введите размерность массива M и N: ");
    scanf("%d%d",&M, &N);
    int array[M][N];
    printf("\n\nВведите числовые элементы: \n\n");
    for (i = 0; i<M; i++)  
  {
    for (j = 0; j<N; j++) 
    {
      printf("array[%d][%d] = ", i, j);
      scanf("%d", &array[i][j]);
    }
  }
  // Вывод элементов массива
  for (i = 0; i<M; i++) 
  {
    for (j = 0; j<N; j++) 
    {
      printf("%d ", array[i][j]);
    }
    printf("\n"); 
  }
  getchar(); printf("\n\n"); 
    
    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            if (i%2!=0)
            {
                printf(" %d", array[i][N-j-1]);
            }
            else
            {
                printf(" %d", array[i][j]);
            }
        }
        printf("\n"); 
    }
    return 0;
}
