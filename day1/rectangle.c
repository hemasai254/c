#include<stdio.h>
int main()
{
    int l,w,a,p;
    printf("enter length and width of the rectangle:");
    scanf("%d%d",&l,&w);
    a =l*w;
    p =2*(l+w);
    printf("Area of Rectangle is %d , Perimeter of Rectangle is %d", a,p);
    
    return 0;
}