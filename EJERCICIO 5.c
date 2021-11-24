#include <stdio.h>
#include <stdlib.h>
int main()
{
     int nota_anterior=0;
     int tabla_nota[5][5];
     int i=0,j,eleccion,numero,legajo,nota_nueva,confirm;
     float promedio,sum=0;
    for(i=0;i<5;i++)
    {
          reinicio:
          printf("\nNum_%d de Legajo\n",i+1);
         for(j=0;j<4;j++)
         {
              printf("%d TRIMESTRE: ",j+1);
              scanf("%d",&tabla_nota[i][j]);
              if(tabla_nota[i][j]<0 || tabla_nota[i][j]>10)
              {
                   system("cls");
                   printf("Ingrese las notas correctamente");
                   system("pause");
                   system("cls");
                    goto reinicio;
               }
         }
    }
    printf("\nDesea corregir alguna nota?\n     SI=1    NO=2\nRta: ");
    scanf("%d",&eleccion);

    switch(eleccion)
    {
    case 1:
         printf("______________________________\n\nIngrese Num de Legajo (Del 1 al 100): ");
         scanf("%d",&legajo);
         printf("\nIngrese numero de trimestre: ");
         scanf("%d",&numero);
         printf("\nIngrese la nota nueva: ");
         reinicio1:
         scanf("%d",&nota_nueva);
         if(nota_nueva<0 || nota_nueva>10)
         {
              system("cls");
              printf("Ingrese bien la nota\n\n\n");
              system("pause");
              system("cls");
              for(i=0;i<5;i++)
               {
                    printf("\nNum_%d de Legajo\n",i+1);
                    for(j=0;j<4;j++)
                         {
                              printf("%d TRIMESTRE: %d\n",j+1,tabla_nota[i][j]);
                         }
               }
               printf("\nIngrese Num de Legajo (Del 1 al 3): %d\n",legajo);
               printf("\nIngrese numero de trimestre: %d\n",numero);
               printf("\nIngrese la nota nueva: ");
               goto reinicio1;
          }

          printf("\n");
         printf("-------------------------------------------------\n>>REGISTROS<<\n\nLegajo: %d\n", legajo);
         printf("Trimestre: %d\n", numero);
         nota_anterior = tabla_nota[legajo-1][numero-1];
         printf("Nota anterior: %d\n", nota_anterior);
         printf("-------------------------------------------------\n");
         printf("\nEsta seguro/a de la modificacion?\n  SI=1   NO=2\nRta: ");
         scanf("%d",&confirm);
         if(confirm==1)
         {
              system("cls");
              tabla_nota[legajo-1][numero-1]=nota_nueva;
              printf("\n Num  1erTRIMESTRE  2doTRIMESTRE  3eroTRIMESTRE  4toTRIMESTRE  PROMEDIO\n");

              for(i=0;i<5;i++)
               {
                    sum=0;
                    printf("  %d ",i+1);

                    for(j=0;j<4;j++)
                         {
                              sum=sum+tabla_nota[i][j];
                              promedio=sum/4;
                              printf("        %d     ",tabla_nota[i][j]);
                         }
                    printf("     %.2f",promedio);
                    printf("\n");
               }
         }
         else
         {
              system("cls");
              printf("Desea continuar?\n  SI=1   NO=2\nRta: ");
              scanf("%d",&confirm);

              if(confirm==1)
               {
                    printf("\n Num  1erTRIMESTRE  2doTRIMESTRE  3eroTRIMESTRE  4toTRIMESTRE  PROMEDIO\n");

                    for(i=0;i<5;i++)
                         {
                              sum=0;
                              printf("  %d ",i+1);

                              for(j=0;j<4;j++)
                                   {
                                        sum=sum+tabla_nota[i][j];
                                        promedio=sum/4;
                                        printf("        %d     ",tabla_nota[i][j]);
                                   }
                              printf("     %.2f",promedio);
                              printf("\n");
                         }
               }
         }

     break;
    case 2:
         system("cls");
         printf("\n Num  1erTRIMESTRE  2doTRIMESTRE  3eroTRIMESTRE  4toTRIMESTRE  PROMEDIO\n");
        for(i=0;i<5;i++)
          {
               sum=0;
               printf("  %d ",i+1);

               for(j=0;j<4;j++)
                    {
                         sum=sum+tabla_nota[i][j];
                         promedio=sum/4;
                         printf("        %d     ",tabla_nota[i][j]);
                    }
               printf("     %.2f",promedio);
               printf("\n");
          }
     break;
    }

    return 0;
}

