#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tabla[2][3]={
         {10,5,2},
         {8,3,4}
     },
     tabla1[2][3]={
         {10,5,2},
         {8,3,4}
     };


    int i,j;
    printf("Matriz sin multiplicar:\n");
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
     for(i=0;i<2;i++)
    {
         tabla1[i][2] = tabla1[i][2] * 3;
     for(j=0;j<3;j++)
     {
          printf("%d ",tabla1[i][j]);
     }
          printf("\n");
     }

    return 0;
}
