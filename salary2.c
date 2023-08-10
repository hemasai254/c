#include<stdio.h>
int NoOfDaysinMonth(int, int);
int IsLeapYear(int);

int NoOfDaysinMonth(int m, int y){ 
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    return 31;
    if(m==4 ||m==6 ||m==9 ||m==11 )
    return 30;
    int ly;
    ly= IsLeapYear(y);
    if(ly==1)
    return 29;
    else if(ly==0)
    return 28;
}

int IsLeapYear(int y){
    if((y%100!=0)&&(y%4==0)||(y%400==0))
    return 1;
    else
    return 0;
}
