#include<stdio.h>
int main()
{

    int i,n,sum=0;


    printf("The 10 %d number sume :\n");
    for(i=1;i<=10;i++){
        printf("%d",i);
        scanf("%d",&n);
        sum=sum+i;

    }

        printf("The 10 Number sum:%d\n The 10 number avarege:%f\n",sum  );

}
