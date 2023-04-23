#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Input Upto table number starding from 1:");
    scanf("%d",&n);
    printf("Multipale Table 1 to %d\n",n);
    for(i=1;i<=10;i++){


        for(j=1;j<=1;j++){

         printf("%d*%d=%d,",j,i,i*j);
        }

        printf("\n");
    }




}
