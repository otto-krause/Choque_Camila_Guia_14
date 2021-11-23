#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabla [2][3];
    int i,j;
    for(i=0;i<2;i++)
    {
         for(j=0;j<3;j++)
         {
            printf("Ingrese un valor (%d, %d): ",i,j);
              scanf("%d",&tabla[i][j]);
         }
    }
     system("cls");
     printf("La matriz ingresada es:\n\n");
    for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
          printf("%d ",tabla[i][j]);
     }
          printf("\n");
     }
    return 0;
}
