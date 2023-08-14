#include<stdio.h>
#include"dates.h"

int main()
{
    int n,i,d,m,y,d1,m1,y1,vd;
    printf("enter number of candidates: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Date of Birth of Candidate#%d:",i+1);
        hello: scanf("%d-%d-%d",&d,&m,&y);
        vd=IsValidDate(d,m,y);
        if(vd==0)
        {
            printf("Date is Invalid, Please enter valid date: ");
            goto hello;
        }
        if(i==0)
        {
            d1=d;
            m1=m;
            y1=y;
        }
        if(i>0)
        DateCompare(d1,m1,y1,d,m,y);
    }
    {
        extern int d;
        extern int m;
        extern int y;
        PrintDateinFormat(d,m,y);
    }
    return 0;
}