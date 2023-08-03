#include<stdio.h>
int main()
{
    int a;
    printf("enter integer:");
    scanf("%d",&a);
    printf("%d", a);


    unsigned int b;
    printf("enter unsigned integer:");
    scanf("%u",&b);
    printf("%u", b);
    
    short int c;
    printf("enter short integer:");
    scanf("%hd",&c);
    printf("%hd", c);

    short unsigned int d;
    printf("enter short unsigned integer:");
    scanf("%hu",&d);
    printf("%hu", d);

    long int e;
    printf("enter long integer:");
    scanf("%ld",&e);
    printf("%ld", e);

    long unsigned int f;
    printf("enter long unsigned integer:");
    scanf("%lu",&f);
    printf("%lu", f);

   signed char g;
    printf("enter signed char:");
    scanf("%s",&g);
    printf("%s", g);

    unsigned char h;
    printf("enter unsigned char:");
    scanf("%c",&h);
    printf("%c", h);

    float i;
    printf("enter float value:");
    scanf("%f",&i);
    printf("%f", i);
    
    double j;
    printf("enter double value:");
    scanf("%lf",&j);
    printf("%lf", j);

    long double k;
    printf("enter long double value:");
    scanf("%Lf",&k);
    printf("%Lf", k);

    return 0;
}