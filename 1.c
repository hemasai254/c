#include<stdio.h>
int NoOfDaysinMonth(int, int);
int CalculateNetSalary(int,int,int);
int main()
{
    int sal,m,y,lop,d,Net_salary;
    printf("Input:");
    printf("Total salary of the employee:\n");
    scanf("%d",&sal);
    printf("month:\n");
    scanf("%d",&m);
    printf("year:\n");
    scanf("%d",&y);
    printf("Number of Loss of Pays:\n");
    scanf("%d",&lop);
    if(sal<0)
    sal*=-1;
    if(m<0)
    m*=-1;
    if(y<0)
    y*=-1;
    d=NoOfDaysinMonth(m,y);
    printf("%d",d);
    Net_salary=CalculateNetSalary(sal,d,lop);
    printf("output: Net Payable Salary is: %d",Net_salary);

}