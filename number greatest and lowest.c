#include<stdio.h>
int main()
{
    int T;
    printf("Enter  the  Temparature\n");
    scanf("%d",&T);
    if(T<0){
        printf("Freezing Whether");
    }
    else if(T<=10){
        printf("Very COld");
    }
    else if(T<=20){
        printf("Cold whether");
    }


    else if(T<=30){
        printf("Normal Tempature");
    }
    else if(T<=40){
        printf("It hot Temparuture");


    }
    else
        printf("VEry Hot");
}
