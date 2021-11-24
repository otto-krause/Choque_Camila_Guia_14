#include <stdio.h>
#include <stdlib.h>
int main()
{
int i=0,c=1,num_coche[12]={0},k=0,linea[12]={0},recaudo[12]={0},z=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0,sum11=0,sum12=0,indice=0,sumatoria=0;
do{
i++;
z++;
k++;
//c++;
printf(">>PLANTILLA %d<<\n",i);
printf("Numero de coche: ");
scanf("%d",&num_coche[k]);
printf("Numero de linea (1 al 3): ");
scanf("%d",&linea[z]);
printf("Recaudacion: ");
scanf("%d",&recaudo[i]);
indice=i-1;
printf("\n");

}while(num_coche[k]>=1 && linea>=1);

reinicio:
printf("Num_de_coche  Num_Linea  Recaudo\n");
   for(k=0;k<indice;k++)
    {
         printf("     %d            ",num_coche[k+1]);
          printf("%d        ",linea[k+1]);
          printf("%d ",recaudo[k+1]);

         printf("\n");
    }
    printf("\n\n\n>>Recaudacion total por la linea de colectivo\n\n");
    for(k=0;k<=indice;k++)
    {
         if(linea[k]==1)
         {
              sum1=sum1+recaudo[k];
         }
              if(linea[k]==2)
              {
                   sum2=sum2+recaudo[k];
              }
                   if(linea[k]==3)
                   {
                        sum3=sum3+recaudo[k];
                   }
    }

    int tabla[3][1]={{sum1},{sum2},{sum3}};
    printf("Linea  Recaudo total\n");
    for(i=0;i<3;i++)
    {
         printf("  %d  ",i+1);
         for(int j=0;j<1;j++)
         {
              printf("       %d ",tabla[i][j]);
         }
         printf("\n");
    }

    printf("\n\n\n>>Recaudacion total por coche\n\n");
         sum1=0;
         sum2=0;
         sum3=0;
        for(k=0;k<=indice;k++)
    {
         if(num_coche[k]==1)
         {
              sum1=sum1+recaudo[k];
         }
               if(num_coche[k]==2)
         {
              sum2=sum2+recaudo[k];
         }
          if(num_coche[k]==3)
         {
              sum3=sum3+recaudo[k];
         }
          if(num_coche[k]==4)
         {
              sum4=sum4+recaudo[k];
         }
          if(num_coche[k]==5)
         {
              sum5=sum5+recaudo[k];
         }
          if(num_coche[k]==6)
         {
              sum6=sum6+recaudo[k];
         }
          if(num_coche[k]==7)
         {
              sum7=sum7+recaudo[k];
         }
          if(num_coche[k]==8)
         {
              sum8=sum8+recaudo[k];
         }
          if(num_coche[k]==9)
         {
              sum9=sum9+recaudo[k];
         }
          if(num_coche[k]==10)
         {
              sum10=sum10+recaudo[k];
         }
          if(num_coche[k]==11)
         {
              sum11=sum11+recaudo[k];
         }
          if(num_coche[k]==12)
         {
              sum12=sum12+recaudo[k];
         }

    }
int tabla1[12][1]={{sum1},{sum2},{sum3},{sum4},{sum5},{sum6},{sum7},{sum8},{sum9},{sum10},{sum11},{sum12}};
    printf("Num_coche  Recaudo total\n");
    for(i=0;i<12;i++)
    {
         for(int j=0;j<1;j++)
         {
              if(tabla1[i][j]>0)
              {
                   printf("  %d  ",i+1);
                   printf("       %d ",tabla1[i][j]);
              }
         }
         printf("\n");
    }

    sumatoria=sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10+sum11+sum12;
int tabla_total[1][3]={3,12,sumatoria};

    printf("\n\n>>Recaudacion total general\n");
    printf("\nTOTAL DE LINEAS  TOTAL DE COCHES  RECAUDACION TOTAL\n");
    for(i=0;i<1;i++)
    {
         for(int j=0;j<3;j++)
         {
              printf("       %d         ",tabla_total[i][j]);
         }
    }

    return 0;
}
