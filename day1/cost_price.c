#include<stdio.h>
int main()
{
    int s,n,p,x;

    printf("Enter sale price, profit and number of items:");
    scanf("%d%d%d",&s,&p,&n);
    x = (s-p)/n;
    printf("Cost price of each item is %d",x);
    
    return 0;
}