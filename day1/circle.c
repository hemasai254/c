#include<stdio.h>
int main()
{
    int x;
    float a,p;
    printf("enter radius of a Circle:");
    scanf("%d",&x);
    a = 3.14*x*x;
    p =3.14*2*x;
    printf("Area of Circle is %f , Perimeter of Circle is %f", a,p);
    
    return 0;
}