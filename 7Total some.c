#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("input value of tearm\n");
    scanf("%d",&n);
    printf("\nThe is frist %d naturel namber:\n",n);
    for(i=1;i<=7;i++){

        printf("%d\n",i);
        sum=sum+i;
    }

  printf("Thee 7 natural number sume is:%d\n",sum,n);
}
