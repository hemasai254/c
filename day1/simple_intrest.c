#include<stdio.h>
int main()
{
    int p,n;
    float r,si,m;
    
    printf( "please enter principle,time in months and rate of interest :");
    scanf("%d%d%f",&p,&n,&r);
    m = n/12;
    si = p*m*r/100;
    printf("your simple intrest is %f",si);
    
    return 0;
}