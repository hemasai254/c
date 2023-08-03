#include<stdio.h>
int main()
{

// 1) find the biggest out of 4 numbers

// Using multiple simple if statements

    // int a,b,c,d,x1,x2;
    // printf("Enter four numbers: ");
    // scanf("%d%d%d%d",&a,&b,&c,&d);
    // if(a>b)
    // x1=a;
    // if(b>a)
    // x1=b;
    // if(c>d)
    // x2=c;
    // if(d>c)
    // x2=d;
    // if(x1>x2)
    // printf("%d is bigger",x1);
    // if(x2>x1)
    // printf("%d is bigger.",x2);



//2) find the biggest of 4 numbers using if else ladder

//    int a,b,c,d,big;
//     printf("Enter four numbers: ");
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     if (a>b)
//     {
//         if (a>c)
//         {
//             if (a>d)
//             {
//             big=a;   
//             }
//             else
//             big=d;
            
//         }
//         else if (c>d)
//         {
//         big=c;
//         }
//         else
//         big=d;
//     }
//     else if (b>c)
//     {
//         if (b>d)
//         {
//             big=b;
//         }
//         else
//         big=d;
//     }
//     else if (c>d)
//     {
//         big=c;
//     }
//     else
//     big=d;
 
//     printf("%d is greater",big);
//  return 0;
// }

//3) C program to check whether a number is positive, negative or zero



    // int a;
    // printf("enter any number: ");
    // scanf("%d",&a);
    // if (a>0)
    // printf("%d is positive",a);
    // else if (a==0)
    // printf("%d is zero",a);
    // else if (a<0)
    // printf("%d is negative",a);


//4) Print if a given character is alphabet or not.

// char c;
// printf("enter any alphabet\n");
// scanf("%c",&c);
// if(c>='a')
// {
//     if (c<='z')
//     {
//        printf("%c is an alphabet",c);
//     }
//     else
//     printf("%c is not an alphabet",c);
    
// }
// else if (c<='Z')
// {
//     if (c>='A')
//     {
//         printf("%c is an alphabet",c);
//     }
//     else
//     printf("%c is not an alphabet",c);
    
// }
// else
// printf("%c is not an alphabet",c); 

//5) Print if a given character is vowel or not

char c,x;
printf("enter any alphabet: \n");
scanf("%c",&c);
if (c=='a'){
    if (c=='e'){
        if (c=='i'){
            if (c=='o'){
                 if (c=='u'){        
                    if (c=='A'){
                        if(c=='E'){
                            if(c=='O'){
                                if(c=='U'){
                                printf("vowel");
                                }}}}}}}}}
else
printf("%c is not a vowel.",c);


//6) Print the case reverse of a given character. If the given character is small letter then convert it to capital. If it is capital, then convert it to small. Otherwise say it is not an alphabet.

// char c;
// printf("enter any alphabet\n");
// scanf("%c",&c);
// if(c>='a')
// {
//     if (c<='z')
//     {
//        printf("%c",c-32);
//     }
//     else
//     printf("%c is not an alphabet",c);
    
// }
// else if (c<='Z')
// {
//     if (c>='A')
//     {
//         printf("%c",c+32);
//     }
//     else
//     printf("%c is not an alphabet",c);    
// }
// else
// printf("%c is not an alphabet",c);

//7) Find the power bill for the input number of units :
  // 0 - 200 units : 100/- min
  // 201 - 400 units : 100 + 0.65 per unit excess of 200
  // 401 - 600 units : 230 + 0.80 per unit excess of 400
  // 601 and above units : 390 + 1.00 per unit excess of 600

int units,bill;
printf("enter no of units consumed: \n") ;
scanf("%d",&units);
if (units<=200)
bill=100;
else if (units<=400)
bill=100+(units-200)*0.65;
else if (units<=600)
bill=100+130+((units-400)*0.8);
else if (units>601)
bill=100+130+160+(units-600);
printf("your bill is Rs %d/-",bill);


//8) Write a calculator program that takes two integer numbers from user, and one of the operands +,-,* and / as a character and prints the appropriate result using if else ladder.

// int a,b,x;
// char op;
// printf("enter a number: \n");
// scanf("%d",&a);
// printf("enter another number: \n");
// scanf("%d",&b);
// printf("enter operand sign + or - or * or /: \n");
// scanf(" %c",&op);
// if (op=='+')
// printf("calculation is %d",a+b);
// else if (op=='-')
// printf("calculation is %d",a-b);
// else if (op=='*')
// printf("calculation is %d",a*b);
// else if (op=='/')
// printf("calculation is %d",a/b);


// 9) Find the % of marks for 6 subjects (6 subject marks given as input), for a student, and print the grade of the student as per below division , using if else ladder statement.
// 80 - 100        : Honours
// 60 - 79         : First Division
// 50 - 59         : Second Division
// 40 - 49         : Third Division
// 0 - 39          : Fail

// int a,b,c,d,e,f,p;
// printf("enter marks of 6 subjects with spaces: \n");
// scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

// p=(a+b+c+d+e+f)/6;
// if(p>=80)
// printf("you got %d percentage,Honours",p);
// else if(p>=60)
// printf("you got %d percentage,First Division",p);
// else if(p>=50)
// printf("you got %d percentage,Second Division",p);
// else if(p>=40)
// printf("you got %d percentage,Third Division",p);
// else if(p>=0)
// printf("you got %d percentage,Fail",p);


//10 atm withdrawl

// #include<stdio.h>
// int main()
// {
//     int amount;
//     printf("enter the amount you want to withdrawl: ");
//     scanf("%d",&amount);
//     if (amount % 50 != 0)
//     {
//         printf("enter the amount in denomianations of 50");
//     }
//     else{
//         int _2000,_500,_200,_100,_50;
//         _2000 = amount / 2000;
//         _500 = (amount % 2000)/500;
//         _200 = ((amount%2000)%500)/200;
//         _100 = (((amount%2000)%500)%200)/100;
//         _50 = ((((amount%2000)%500)%200)%100)/50;
//         printf("money dispensed as follows:\n");
//         if(_2000>0)
//         printf("No of 2000/- notes: %d\n",_2000);
//         if(_500>0) 
//         printf("No of 500/- notes: %d\n",_500);
//         if(_200>0)
//         printf("No of 200/- notes: %d\n",_200); 
//         if(_100>0)
//         printf("No of 100/- notes: %d\n",_100); 
//         if(_50>0)
//         printf("No of 50/- notes: %d\n",_50); 
//     }
//     return 0;
// }


int a,b,c,d,e,f,p;
printf("enter marks of 6 subjects with spaces: \n");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

p=(a+b+c+d+e+f)/6;
if(p>=80 && p<100)
printf("you got %d percentage,Honours",p);
else if(p>=60 && p<79)
printf("you got %d percentage,First Division",p);
else if(p>=50 && p<59)
printf("you got %d percentage,Second Division",p);
else if(p>=40 && p<49)
printf("you got %d percentage,Third Division",p);
else if(p>=0 && p<39)
printf("you got %d percentage,Fail",p);









    return 0;
}