#include<stdio.h>
int NoOfDaysinMonth(int, int);
int CalculateNetSalary(int,int,int);
int main()
{
    int sal,m,y,lop,d,Net_salary;
    printf("Input:");
    printf("Total salary of the employee:\n");
    scanf("%d",&sal);
    for(;sal<0;)
    {printf("enter a right value.");
    scanf("%d",&sal);
    }
    printf("month:\n");
    scanf("%d",&m);
     for(;m<0  ;)
    { 
      hello:  printf("enter a right value.");
        scanf("%d",&m);
    // goto hello;
    }
    if (m>12)
    goto hello;
    printf("year:\n");
    scanf("%d",&y);
    for(;y<0;)
    {printf("enter a right value.");
    scanf("%d",&y);
    }
    printf("Number of Loss of Pays:\n");
    scanf("%d",&lop);
    for(;lop<0;)
    {printf("enter a right value.");
    scanf("%d",&lop);
    }
    // if(sal<0)
    // sal= sal*-1;
    // if(m<0)
    // m*=-1;
    // if(y<0)
    // y*=-1;
    d= NoOfDaysinMonth(m,y);
    Net_salary=CalculateNetSalary(sal,d,lop);
    printf("output: Net Payable Salary is: %d",Net_salary);

}