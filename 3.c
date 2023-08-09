#include<stdio.h>
int CalculateNetSalary(int sal, int d, int lop)
{
    int pay;
    pay= sal - (lop * (sal/d));
    return pay;
}