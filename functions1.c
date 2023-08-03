#include<stdio.h>
//1
// float simple(int p,float r,float m);
// int main()
// {
//  int p,n;
//  float r,s,m;
//  printf("enter principle,rate,time:");
//  scanf("%d%f%d",&p,&r,&n);
//  m=n/12.0;
//  s=simple(p,r,m);
//  printf("the total amount is:%f",p+s);
// }

// float simple(int p,float r,float m)
//    {
//     float si;
//     si=(p*r*m)/100;
//     return si;
//    }

//2
// int power(int a,int n);

// int main()
// {
//     int a,n,pow;
//     printf("enter input:\n");
//     scanf("%d%d",&a,&n);
//     pow=power(a,n);
//     printf("power=%d",pow);
    
//     return 0;
// }

// int power(int a, int n){
//     int i,pow;
//     for ( i = 1,pow=1; i <=n; i++)
//     {
//         pow*=a;
//     }
//     return pow;
// }


//3
// int product(int a, int b);

// int main()
// {
//     int a,b,pro;
//     printf("enter input:\n");
//     scanf("%d%d",&a,&b);
//     pro= product(a,b);
//     printf("product=%d",pro);
    
//     return 0;
// }

// int product(int a, int b){
//     int i,pro;
//     for ( i = 1,pro=0; i <=b; i++)
//     {
//         pro+=a;
//     }
//     return pro;
// }



//4
// int quotient(int a,int b);

// int main()
// {
//     int a,b,q;
//     printf("enter input:\n");
//     scanf("%d%d",&a,&b);
//     q=quotient(a,b);
//     printf("quotient=%d",q);
//     return 0;
// }

// int quotient(int a, int b){
//     return a/b;
// }


//5
// int remainder1(int a,int b);

// int main()
// {
//     int a,b,r;
//     printf("enter input:\n");
//     scanf("%d%d",&a,&b);
//     r=remainder1(a,b);
//     printf("remainder=%d",r);
//     return 0;
// }

// int remainder1(int a, int b){
//     return a%b;
// }


//6
// void printTable(int n);

// int main()
// {
//     int n;
//     printf("enter number:\n");
//     scanf("%d",&n);
//     printTable(n);
//     return 0;
// }

// void printTable(int n){
//     int i;
//     for(i=1;i<=10;i++)
//         {printf("%d\n",i*n);}
// }

//7
// int prime(int n);

// int main()
// {
//     int n,p;
//     printf("enter input:\n");
//     scanf("%d",&n);
//     p=prime(n);
//     if (p==1)
//     printf("prime number");
//     else 
//     printf("not a prime number");
    
//     return 0;
// }

// int prime(int n){
//     int i=1,c=0,p=1,np=0;
//     while (i<=n)
//     {
//         if(n%i==0)
//         c++;
//         if (c>2)
//         {return np;
//         break;}
//         i++;
//     }
//     if(c==2)
//     return p;
// }


//8
// int fun_alpha_num(char c);

// int main()
// {
//     int p;
//     char c;
//     printf("enter input:\n");
//     scanf("%c",&c);
//     p=fun_alpha_num(c);
//     if (p==1)
//     printf("alphanumeric");
//     else 
//     printf("not a alphanumeric");
    
//     return 0;
// }

// int fun_alpha_num(char c){
//     // char c;
//     if(c>='a' && c<='z' || c<='Z' && c>='A' || c>='0' && c<='9')
//     return 1;
//     else
//     return 0 ;
// }

//9
//     int add(int a, int b);
//     int sub(int a, int b);
//     int mul(int a, int b);
//     int quo(int a, int b);
//     int rem(int a, int b);
    
//     int main(){
//         int a,b,x;
//         char op;
//         printf("enter 2 numbers:\n");
//         scanf("%d%d",&a,&b);
//         printf("enter operand:\n");
//         scanf(" %c",&op);
//         if (op=='+')
//         {x= add(a,b);
//         printf("sum is %d",x);}
//         else if (op=='-')
//         {x= sub(a,b);
//         printf("difference is %d",x);}
//         else if (op=='*')
//         {x= mul(a,b);
//         printf("product is %d",x);}
//         else if (op=='/')
//         {x= quo(a,b);
//         printf("quotient is %d",x);}
//         else if (op=='%')
//         {x= rem(a,b);
//         printf("rema    inder is %d",x);}
//         return 0;
//     }

// int add(int a, int b){
//     return a+b;
// }
// int sub(int a, int b){
//     return a-b;
// }
// int mul(int a, int b){
//     return a*b;
// }
// int quo(int a, int b){
//     return a/b;
// }
// int rem(int a, int b){
//     return a%b;
// }







//10
// int leapYear(int y);

// int main()
// {
//     int y,p;
//     printf("enter year:\n");
//     scanf("%d",&y);
//     p=leapYear(y);
//     if (p==1)
//     printf("leap Year ");
//     else 
//     printf("not a leap Year ");
    
//     return 0;
// }

// int leapYear(int y){
//     if (y % 100 != 0 && y % 4 == 0 || y%400 ==0)
//     return 1;
//     else
//     return 0;
// }


//11
int numberOfDays(int m,int y);

int main()
{
    int d,m,y,x;
    printf("enter month and date:\n");
    scanf("%d %d",&m,&y);
    x=numberOfDays(m,y);
    if (x==1)
    printf("31 days");
    if (x==2)
    printf("30 days");
    if (x==3)
    printf("29 days");
    if (x==4)
    printf("28 days");
}

int numberOfDays(int m,int y){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    return 1;
    else if(m==1||m==4||m==6||m==9||m==11)
    return 2;
    else if (m==2)
        if(y % 100 != 0 && y % 4 == 0 || y%400 ==0)
        return 3;
        else 
        return 4;
}


// //12
// void swap(int a,int b);

// int main()
// {
//     int a,b;
//     printf("enter number:\n");
//     scanf("%d%d",&a,&b);
//     swap(a,b);
//     return 0;
// }

// void swap(int a,int b){
//     printf("a=%d,b=%d",b,a);
// }

//13
// int dateCheck(int d1,int d2,int m1,int m2,int y1,int y2);

// int main()
// {
//     int d1,d2,m1,m2,y1,y2,p;
//     printf("enter year 1:\n");
//     scanf("%d-%d-%d",&d1,&m1,&y1);
//     printf("enter year 2:\n");
//     scanf("%d-%d-%d",&d2,&m2,&y2);
//     p=dateCheck(d1,d2,m1,m2,y1,y2);
//     if (p==1)
//     printf("old is %d-%d-%d",d1,m1,y1);
//     else 
//     printf("old is %d-%d-%d",d2,m2,y2);
    
//     return 0;
// }

// int dateCheck(int d1,int d2,int m1,int m2,int y1,int y2){
//     if ((d1+(m1*10)+y1)<(d2+(m2*10)+y2))
//     return 1;
//     else
//     return 2;
// }

//14
// int validDate(int d, int m, int y);

// int main()
// {
//     int d,m,y,p;
//     printf("enter year:\n");
//     scanf("%d-%d-%d",&d,&m,&y);
//     p=validDate(d,m,y);
//     if (p==1)
//     printf("Valid");
//     else 
//     printf("Invalid");
    
//     return 0;
// }

// int validDate(int d, int m, int y){
//     switch (m)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12: if(d>0 && d<32)
//                 return 1;
//             else
//                 return 0;
//     break;
//     case 4:
//     case 6:
//     case 9:
//     case 11: if(d>0 && d<31)
//                 return 1;\
//             else
//                 return 0;
//     break;
//     case 2: if (y % 100 != 0 && y % 4 == 0 || y%400 ==0)
//                 {
//                 if(d>0 && d<30)
//                 return 1;}
//             else if(d>0 && d<29)
//                 return 1;
//             else
//                 return 0;
//     break;            
    
    
    
//     default: return 0;
//         break;
//     }
// }
