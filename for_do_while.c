#include<stdio.h>
int main()
{
    //1
    // int i,n,m,x;
    // printf("enter n value: \n");
    // scanf("%d",&n);
    // printf("enter numbers: \n");
    
    // for ( i = 0; i<=n; i++)
    // {
    //    scanf("%d",&m); 
    //     if (i==0)
    //     x=m;
    //     else
    //     {x= x>m?x:m; 
    //     x==m?printf("%d is bigger\n",m):printf("%d is smaller\n",m);}
    // }
    

    //2
    // int i,c=1,m,x;
    // printf("enter a number:\n");
    // for ( i=0; ;i++ )
    // {  
    //     scanf("%d",&m);
    //     if(i==0)
    //     x=m;
    //     else if(m<0)
    //     {
    //     printf("output: %d\n",c);
    //     break;}
    //     else if(m>x)
    //     {
    //         x=m;
    //         printf("%d          ",x);
    //         c++;
    //     }
    //     else if (m<x)
    //         printf(" wrong input ,please enter a number bigger than %d",x); 
    // }
    

    //4
    // int f1=0,f2=1,f3,i,n;
    // printf("enter n value :\n");
    // scanf("%d",&n);
    // printf("first %d fibonacci numbers are:\n",n);
    // printf("%d\n%d\n",f1,f2);
    // for ( i = 2; i <= n; i++)
    // {
    //     f3=f1+f2;
    //     printf("%d\n",f3);
    //     f1=f2;
    //     f2=f3;
    // }
    


    //5
    // int i,n,x;
    // printf("enter a number:\n");
    // scanf("%d",&n);
    // for (; ; )
    // {
    //     x=n%10;
    //     n/=10;
    //     printf("%d",x);
    //     if(n==0)
    //     break;
    // }


    //6
    // int i,n,c=0;
    // printf("enter n value:\n");
    // scanf("%d",&n);
    // do
    // {
    //     n=n/10;
    //     c++;
        
    //     if(n==0)
    //     break;
    // } while (1);
    // printf("%d",c);

    //7
    do
    {
    int a,b,x;
    char op,c;
    printf("enter two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("enter operand sign + or - or * or /: \n");
    scanf(" %c",&op);
    if (op=='+')
    printf("Sum is %d\n",a+b);
    else if (op=='-')
    printf("Difference is %d\n",a-b);
    else if (op=='*')
    printf("Product is %d\n",a*b);
    else if (op=='/')
    printf("Quotient is %d\n",a/b);

    printf("do you want to continue?: \n");
    scanf(" %c",&c);

    if (c=='n')
    break;
    } while(1);


    //8
    int i=1,c=0,n;
    printf("enter a number:\n");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        c++;
        if (c>2)
        {printf("%d is not a prime number",n);
        break;}
        i++;
    }while (i<=n);
    if(c<=2)
    printf("%d is a prime number",n);


    //3
    // int i,n,m,x,y;
    // printf("enter n value:\n");
    // scanf("%d",&n);
    // printf("enter numbers: \n");
    // for ( i = 0; i<n; i++)
    
    // {
    //    scanf("%d",&m); 
    //     if (i==0)
    //     {x=m;
    //     y=m;}
    //     else
    //     {x= x>m?x:m; 
    //      y=y<m?y:m;   
    //     }

    // }
    // printf("%d is bigger\n",x);
    // printf("%d is smaller",y);


    
    return 0;
}