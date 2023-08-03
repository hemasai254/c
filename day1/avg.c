#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    printf("enter four numbers for calculating average:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x = (a+b+c+d)/4;
    printf("average is: %d",x);


    
    return 0;
}