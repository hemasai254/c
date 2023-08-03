#include<stdio.h>
int main()
{
    int x;
    printf("enter any number:\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break; 
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;    
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;    
    default:
        printf("wrong week");
        break;
    }
    
    int d,m,y;
    printf("Enter any date:\n");
    scanf("%d-%d-%d",&d,&m,&y);
    
    if(d==1 || d==21 ||d==31)
    printf("%dst",d);
    else if (d==2 || d==22)
    printf("%dnd",d);
    else if (d==3 || d==23)
    printf("%drd",d);
    else
    printf("%dth",d);
    switch (m)
    {
    case 1:
        printf(" January %d",y);
        break;
    case 2:
        printf(" February %d",y);
        break;
    case 3:
        printf(" March %d",y);
        break; 
    case 4:
        printf(" April %d",y);
        break;
    case 5:
        printf(" May %d",y);
        break;    
    case 6:
        printf(" June %d",y);
        break;
    case 7:
        printf(" July %d",y);
        break;
    case 8:
        printf(" August %d",y);
        break;
    case 9:
        printf(" September %d",y);
        break;
    case 10:
        printf(" October %d",y);
        break; 
    case 11:
        printf(" November %d",y);
        break;
    case 12:
        printf(" December %d",y);
        break;           
    default:
        printf("Wrong date");
        break;
    }

    char c;
    printf("enter any alphabet:\n");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel",c);
        break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':    
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
    printf("%c is a consonant",c);
        break;
    default:
        printf("%c is not an alphabet",c);
        break;
    }

    int a,b;
    char c;
    printf("enter a number: \n");
    scanf("%d",&a);
    printf("enter another number: \n");
    scanf("%d",&b);
    printf("enter operand sign + or - or * or /: \n");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("Sum is %d",a+b);
        break;
    case '-':
        printf("Difference is %d",a-b);
        break;    
    case '*':
        printf("Product is %d",a*b);
        break;
    case '/':
        printf("Quotient is %d",a/b);
        break;    
    default:
        printf("you entered wrong operand");
        break;
    }


    int a,b,c,d,e,f,x;
    float p;
    printf("enter marks of 6 subjects with spaces: \n");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

    p=(a+b+c+d+e+f)/6.0;
    x=(int)p/10;
    switch (x)
    {
    case 0:    
    case 1:
    case 2:
    case 3:
        printf("you got %.2f %%,fail",p);
        break;
    case 4:
        printf("you got %.2f %%,Third Division",p);
        break;
    case 5:
        printf("you got %.2f %%,Second Division",p);
        break;
    case 6:
    case 7:
        printf("you got %.2f %%,First Division",p);
        break;
    case 8:
    case 9:
    case 10:
        printf("you got %.2f %%,Honours",p);
        break;
    default:
        printf("wrong input");
        break;
    }



    int a;
    printf("enter any number:\n");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("%d is even",a);
        break;
    default:
        printf("%d is odd",a);
        break;
    }

    int a,b;
    printf("enter any two numbers:\n");
    scanf("%d%d",&a,&b);
    switch (a>b)
    {
    case 1:
        printf("%d is biggest",a);
        break;
    
    default:
        printf("%d is biggest",b);
        break;
    }

    char c;
    printf("enter any alphabet:\n");
    scanf("%c",&c);
    switch (c>='a' && c<='z' || c<='Z' && c>='A')
    {
    case 1:
        printf("%c is an alphabet",c);
        break;
    
    default:
        printf("%c is not an alphabet",c);
        break;
    }


    char c;
    printf("enter any alphabet:\n");
    scanf("%c",&c);
    switch (c>='a' && c<='z')
    {
    case 1:
        printf("%c",c-32);
        break;
    default:
        switch (c<='Z' && c>='A')
        {
        case 1:
            printf("%c",c+32);
            break;
        default:
            printf("%c is not an alphabet",c);
            break;
        }
    }    
    



int units,bill;
printf("enter no of units consumed: \n") ;
scanf("%d",&units);
switch (units)
{
case 0 ... 200 :
    printf("bill is 100/-");
    break;
case 201 ... 400:
    bill=100+(units-200)*0.65;
    printf("bill is %d/-",bill);
    break;
case 401 ... 600:
    bill=230+(units-400)*0.8;
    printf("bill is %d/-",bill);
    break;
default:
    bill=390+(units-200);
    printf("bill is %d/-",bill);
    break;
}

    return 0;
}
