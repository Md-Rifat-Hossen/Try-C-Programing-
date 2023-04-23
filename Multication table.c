#include<stdio.h>
int main()
{

    int i,n;
    printf("Input Number of Terms:");
    scanf("%d",&n);
    for(i=1; i<=10;i++){

        printf("%d*%d:%d\n",i,i,n*i);
    }



}
