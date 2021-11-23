#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tabla[2][3];
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
     printf("La matriz sin multiplicar:\n\n");
    for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
          printf("%d ",tabla[i][j]);
     }
          printf("\n");
     }

     printf("\n\nMultiplicar la 1era fila x 4:\n");

     for(j=0;j<3;j++)
     {
          tabla[0][j] = tabla[0][j] * 4;
     }
     for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
          printf("%d ",tabla[i][j]);
     }
          printf("\n");
     }

     printf("\n\nMultiplicar la 3era columna x 3:\n");
for(j=0;j<3;j++)
     {
          tabla[0][j] = tabla[0][j]/4;
     }

     for(i=0;i<2;i++)
    {
         tabla[i][2] = tabla[i][2] * 3;
     for(j=0;j<3;j++)
     {
          printf("%d ",tabla[i][j]);
     }
          printf("\n");
     }

    return 0;
}

