#include<stdio.h>
#include"dates.h"
int d,m,y;

int DateCompare(int d1,int m1,int y1,int d2,int m2,int y2)
{
    d=d1;
    m=m1;
    y=y1;
    if(y>y2)
    y=y2;
    else if(y2>y)
    y=y;
    else if(m>m2)
    m=m2;
    else if(m2>m)
    m=m;
    else if(d>d2)
    d=d2;
    else if(d2>d)
    d=d;


}
