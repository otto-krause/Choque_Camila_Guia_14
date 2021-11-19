#include <stdio.h>
#include <stdlib.h>
int main()
{
int tabla_pisos [20][6];
int i,j,cant,sum,sum_total=0;
printf(">>3 departamentos: capacidad de 4 personas o mayor de 2 (c/u)\n>>3 departamentos: capacidad de 1 persona\n\n\nIngrese cantidad de habitantes por cada DEPTO:\n\n");
for(i=0;i<20;i++)

    {
          printf("\nPISO %d\n",i+1);

         for(j=0;j<6;j++)

         {

              printf("Departamento %d: ",j+1);

              scanf("%d",&tabla_pisos[i][j]);

}
printf("\n");
}
printf("\n                      CANTIDAD DE HABITANTESx c/DEPTO");
printf("\n PISO  DEPTO1  DEPTO2  DEPTO3  DEPTO4  DEPTO5  DEPTO6  TOTAL.HABIT\n");

for(i=0;i<20;i++)

               {

                    sum=0;

                    printf("  %d   ",i+1);


                    for(j=0;j<6;j++)

                         {

                              sum=sum+tabla_pisos[i][j];

                              printf("   %d    ",tabla_pisos[i][j]);

                         }

                    printf("     %d",sum);
            sum_total=sum_total+sum;

                    printf("\n");

               }
            int tabla_total[1][3]={20,120,sum_total};
printf("\nTOTAL DE PISOS  TOTAL DE DEPTO  TOTAL DE HABITANTES\n");

    for(i=0;i<1;i++)

    {
         for(j=0;j<3;j++)

         {

              printf("       %d      ",tabla_total[i][j]);

         }

    }
return 0;

}


