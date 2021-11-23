#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tabla[2][3];
    int i,j,mayor=0,menor=0,sum=0;

    for(i=0;i<2;i++)
    {
         for(j=0;j<3;j++)
         {
            printf("Ingrese un valor (%d, %d): ",i,j);
              scanf("%d",&tabla[i][j]);
         }
    }
     system("cls");
     printf("La matriz sin modificar:\n\n");
    for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
          printf("%d ",tabla[i][j]);
     }
          printf("\n");
     }

     printf("\nMatriz Modificada:\n");
    for(i=0;i<=2;i++)
    {
         tabla[0][i]=tabla[0][i]*4;
    }
    
     for(j=0;j<2;j++)
    {
         tabla[j][2]=tabla[j][2]*3;
    }
    for(i=0;i<=1;i++)
    {
     for(j=0;j<3;j++)
     {
          printf("%d ",tabla[i][j]);
     }
          printf("\n");
     }
mayor=tabla[0][0];
for(i=0;i<=1;i++)
    {
     for(j=0;j<3;j++)
     {
          if(tabla[i][j]>mayor)
          {
               mayor=tabla[i][j];
          }
     }
          printf("\n");
     }
     printf("El valor mayor de todos los elementos de la matriz modificada es: %d",mayor);

menor=mayor;
for(i=0;i<=1;i++)
    {
     for(j=0;j<3;j++)
     {
          if(tabla[i][j]<menor)
               menor=tabla[i][j];
     }
          printf("\n");
     }
     printf("El valor menor de todos los elementos de la matriz modificada es: %d\n\n",menor);
     for(i=0;i<=1;i++)
    {
     for(j=0;j<3;j++)
     {
               sum=sum+tabla[i][j];
     }
     }
     printf("La suma de todos los elementos de la matriz modificada es: %d\n",sum);



    return 0;
}

