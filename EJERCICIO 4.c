#include <stdio.h>

#include <stdlib.h>


int main()

{

    int tabla[3][12];

    int i,j,sum1=0,sum2=0,sum3=0,sumatoria=0;

    printf("Ingrese la recaudacion de cada coche,de cada Linea (Ingrese 4 digitos):\n");

    for(i=1;i<=3;i++)

    {

         printf("\nLINEA %d\n",i);

         for(j=1;j<=12;j++)

         {

              printf("Colectivo %d [%d , %d]: ",j,i,j);

              scanf("%d",&tabla[i-1][j-1]);

         }

    }

    printf("\n\n>>Recaudacion total por la línea de colectivo\n");

    printf("\nLINEA                                                        COLECTIVOS\n");

    printf("       num_1       num_2      num_3      num_4      num_5      num_6      num_7      num_8      num_9      num_10     num_11     num_12\n");

    for(i=0;i<3;i++)

    {

         printf("  %d",i+1);

         for(j=0;j<12;j++)

         {

              printf("     %d  ",tabla[i][j]);

         }

         printf("\n");

    }


    //SUMA 1

    for(i=0;i<12;i++)

    {

         sum1=sum1+tabla[0][i];

    }


    //SUMA 2

    for(i=0;i<12;i++)

    {

         sum2=sum2+tabla[1][i];

    }


    //SUMA 3

    printf("\n\n>>Recaudacion total por coche\n");

for(i=0;i<12;i++)

    {

         sum3=sum3+tabla[2][i];

    }


    int tabla_por_linea[3][2]={{1,sum1},{2,sum2},{3,sum3}};

    printf("\nLINEA   RECAUDO TOTAL \n          x LINEA\n");

    for(i=0;i<3;i++)

    {

         for(j=0;j<2;j++)

         {

              printf("  %d     ",tabla_por_linea[i][j]);

         }

         printf("\n");

    }

    sumatoria=sum1+sum2+sum3;

    int tabla_total[1][3]={3,12,sumatoria};


    printf("\n\n>>Recaudacion total general\n");

    printf("\nTOTAL DE LINEAS  TOTAL DE COCHES  RECAUDACION TOTAL\n");

    for(i=0;i<1;i++)

    {

         for(j=0;j<3;j++)

         {

              printf("       %d         ",tabla_total[i][j]);

         }

    }



    return 0;


}



