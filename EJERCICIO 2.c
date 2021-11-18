#include <stdio.h>

#include <stdlib.h>


int main()

{

    int tabla [2][3] = {{1,2,3}, {4,5,6}};

    int i,j;

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


