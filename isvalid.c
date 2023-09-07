#include<stdio.h>
#include"dates.h"

int IsValidDate(int d,int m,int y)
{
    if(d<=0||m<=0||y<=0)
    return 0;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d>31)
        return 0;
    }
    else if(m==6||m==4||m==9||m==11)
    {
        if(d>30)
        return 0;
    }
    int x;
    x= hello(y);
    if(m==2)
    {
        if(x==1)
        {
            if(d>29)
            return 0;
        }
    }
    if(m==2)
    {
        if(x==0)
        {
            if(d>28)
            return 0;
        }
    }
}

int hello(int y)
{
    if(y%100!=0 && y%4==0 || y%400==0)
    return 1;
    else
    return 0;
}