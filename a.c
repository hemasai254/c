#include<stdio.h>
int main()
{

// int m,p,c;
// printf("enter mpc marks:\n");
// scanf("%d%d%d",&m,&p,&c);
// if (m>=60)
// x=1;
// if(p>=50)
// y=1;
// if(c>=40)
// z=1;

// t=x+y+z;
// if (t==3)
// {
//     if(m+p+c>=200)
//     printf("eligible");
//     else if (m+p>=150)
//     printf("eligible");
//     else
//     printf("not eligible");
// }
// else
// printf("not eligible");



// int a,b,c;
// printf("enter any 3 numbers");
// scanf("%d%d%d",&a,&b,&c);
// if (a>b && a>c)
// printf("%d is bigger",a);
// else if (b>c)
// printf("%d is bigger",b);
// else
// printf("%d is bigger",c);

// int a,b,c,d;
// printf("enter any 4 numbers");
// scanf("%d%d%d%d",&a,&b,&c,&d);
// if(a>b && a>c && a>d)
// printf("%d is bigger",a);
// else if(b>a && b>c && b>d)
// printf("%d is bigger",b);
// else if(c>a && c>b && c>d)
// printf("%d is bigger",c);
// else
// printf("%d is bigger",d);




// char c;
// printf("enter any alphabet\n");
// scanf("%c",&c);
// if(c>='a' && c>'z' || c<='Z' && c>='A')
// printf("%c is an alphabet",c);
// else
// printf("%c is not an alphabet",c);

// char c;
// printf("enter any alphabet\n");
// scanf("%c",&c);
// if(c>='a' && c>'z')
// printf("%c",c-32);
// else if (c<='Z' && c>='A')
// printf("%c",c+32);
// else
// printf("%c is not an alphabet",c);
    

// char c;
// printf("enter any alphabet: \n");
// scanf("%c",&c);
// if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
// printf("%c is vowel",c);
// else
// printf("%c is not a vowel",c);


// char c;
// printf("enter any alphabet: \n");
// scanf("%c",&c);
// (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')? printf("%c is vowel",c): printf("%c is not a vowel",c);
// return 0;
// }

// int y;
// printf("Enter a year: ");
// scanf("%d", &y);
// if (y % 100 != 0 && y % 4 == 0 || y%400 ==0)
// printf("%d is a leap year.",y);
// else
// printf("%d is not a leap year",y);
   
    
//  char c;
// printf("enter any alphabet\n");
// scanf("%c",&c);
// if(c>='a' && c<='z' || c<='Z' && c>='A')
// printf("%c is alphabet",c);
// else
//     printf("%c is not an alphabet",c);    




// int m,p,c,;
// printf("enter mpc marks:\n");
// scanf("%d%d%d",&m,&p,&c);
// if ((m>=60 && p>=50 && c>=40) && (m+p+c>=200 || m+p>=150))
// printf("eligible");
// else
// printf("not eligible");


// int a,b,x;
// printf("enter any 2 numbers");
// scanf("%d%d",&a,&b);
// x= (a>b)?a:b;
// printf("%d is bigger",x);

// int a,b,c,x;
// printf("enter any 3 numbers");
// scanf("%d%d%d",&a,&b,&c);
// x = a>b ? (a>c ? a:c):(b>c?b:c);
// printf("%d is bigger",x);


// int a,b,c,d,x,y,z;
// printf("enter any 4 numbers");
// scanf("%d%d%d%d",&a,&b,&c,&d);
// x= a<b?a:b;
// y= c<d?c:d;
// z= x<y?x:y;
// printf("%d is bigger",z);

// char c;
// printf("enter any alphabet\n");
// scanf("%c",&c);
// (c>='a' && c<='z' || c<='Z' && c>='A')?printf("%c is an alphabet",c):printf("%c is not an alphabet",c);


//  char c;
// printf("enter any alphabet\n");
// scanf("%c",&c);
// (c>='a' && c<='z')?printf("%c",c-32):(c<='Z' && c>='A') ? printf("%c",c+32):printf("%c is not an alphabet",c); 



       
// int a;
// printf("enter any number:\n");
// scanf("%d",&a);
// (a%2==0)?printf("%d is even",a):printf("%d is odd",a);   

       
// int a;
// printf("enter any number:\n");
// scanf("%d",&a);
// a>=0?(a>=1?printf("positive"):printf("zero")):printf("negative");

// int units,bill;
// printf("enter no of units consumed: \n") ;
// scanf("%d",&units);
// if (units>0 && units<=200)
// bill=100;
// else if (units>=201 && units<400)
// bill=100+(units-200)*0.65;
// else if (units>=401 && units<600)
// bill=100+130+((units-400)*0.8);
// else if (units>=601)
// bill=100+130+160+(units-600);
// printf("your bill is Rs %d/-",bill);



// int a,b,c,d,e,f,p;
// printf("enter marks of 6 subjects with spaces: \n");
// scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

// p=(a+b+c+d+e+f)/6;
// if(p>=80 && p<100)
// printf("you got %d percentage,Honours",p);
// else if(p>=60 && p<79)
// printf("you got %d percentage,First Division",p);
// else if(p>=50 && p<59)
// printf("you got %d percentage,Second Division",p);
// else if(p>=40 && p<49)
// printf("you got %d percentage,Third Division",p);
// else if(p>=0 && p<39)
// printf("you got %d percentage,Fail",p);


// int a,b,c,d,e,x;
//     printf("enter 4 integers:");
//     scanf("%d",&a);
//    x=a;
//     b=a%10;
//     a=a/10;
//     c=a%10;
//     a=a/10;
//     d=a%10;
//     a=a/10;
//     e=a%10;
//     printf("%d\n",b+c+d+e);
//     (x%(b+c+d+e)==0)?printf("divisible"):printf("not divisible");


int m,y;
printf("Enter month and year: ");
scanf("%d/%d", &m,&y);

if (m==1||m==3||m==7||m==8||m==10||m==12)
printf("31 days");
else if (m==4||m==5||m==6||m==9||m==11)
printf("30 days");
else if ((m==2) && (y % 100 != 0 && y % 4 == 0 || y%400 ==0) )
printf("29 days");
else
printf("28 days");


// int a,b,c,d,e,f;
// float p;
// printf("enter 6 subjects marks: \n");
// scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
// p=(a+b+c+d+e+f)/6;
// printf("you got %.2f %% ",p);


// int a,b,c,d,e,f;
// float p;
// printf("enter marks of 6 subjects with spaces: \n");
// scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

// p=(a+b+c+d+e+f)/6.0;
// if(p>=80 && p<100)
// printf("you got %f percentage,Honours",p);
// else if(p>=60 && p<79)
// printf("you got %f percentage,First Division",p);
// else if(p>=50 && p<59)
// printf("you got %f percentage,Second Division",p);
// else if(p>=40 && p<49)
// printf("you got %f percentage,Third Division",p);
// else if(p>=0 && p<39)
// printf("you got %f percentage,Fail",p);


// float a,b;
// printf("enter any floating point number:\n");
// scanf("%f",&a);
// int x,y; 
// x= (int)a;
// printf("%d\n",x%10);

// b= a*10;
// y= (int)b;
// printf("%d",y%10);





// int a=-67;
// unsigned int b=95;
// short int c;
// unsigned short int d;
// long int e;
// unsigned long int f;
// char g;
// unsigned char h;
// float i;
// double j;
// long double k;
    


   //SizeOf data type
   //  printf("Size of Datatypes:\n");
   //  printf("int:%lu\n",sizeof(int));
   //  printf("unsigned:%lu\n",sizeof(unsigned int));
   //  printf("short:%lu\n",sizeof(short int));
   //  printf("unsigned short:%lu\n",sizeof(unsigned short int));
   //  printf("long int:%lu\n",sizeof(long int));
   //  printf("unsigned long int:%lu\n",sizeof(unsigned long int ));
   //  printf("float:%lu\n",sizeof(float));
   //  printf("char: %lu\n",sizeof(char));
   //  printf("unsigned char: %lu\n",sizeof(unsigned char));
   //  printf("double:%lu\n",sizeof(double));
   //  printf("long double:%lu\n\n",sizeof(long double));

    //SizeOf variabels;
   //  printf("Size of Variables:\n");
   //  printf("int:%lu\n",sizeof(a));
   //  printf("unsigned:%lu\n",sizeof(b));
   //  printf("short:%lu\n",sizeof(c));
   //  printf("unsigned short:%lu\n",sizeof(d));
   //  printf("long int:%lu\n",sizeof(e));
   //  printf("unsigned long int:%lu\n",sizeof(f));
   //  printf("float:%lu\n",sizeof(g));
   //  printf("char: %lu\n",sizeof(h));
   //  printf("unsigned char: %lu\n",sizeof(i));
   //  printf("double:%lu\n",sizeof(j));
   //  printf("long double:%lu\n\n",sizeof(k));

    //SizeOf Constant;
   //  printf("Size of Constants:\n");
   //  printf("int:%lu\n",sizeof(-263));
   //  printf("unsigned:%lu\n",sizeof(123));
   //  printf("short:%lu\n",sizeof(-6321));
   //  printf("unsigned short:%lu\n",sizeof(632));
   //  printf("long int:%lu\n",sizeof(-41258));
   //  printf("unsigned long int:%lu\n",sizeof(15987));
   //  printf("float:%lu\n",sizeof(66.3214));
   //  printf("char: %lu\n",sizeof(g));
   //  printf("unsigned char: %lu\n",sizeof(g));
   //  printf("double:%lu\n",sizeof(-542871));
   //  printf("long double:%lu\n\n",sizeof(1002003));

    //Size of expression
   //  printf("Size of Expression:\n");
   //  printf("int:%lu\n",sizeof(a+b));
   //  printf("unsigned:%lu\n",sizeof(a+b));
   //  printf("short:%lu\n",sizeof(a+b));
   //  printf("unsigned short:%lu\n",sizeof(a+b));
   //  printf("long int:%lu\n",sizeof(a+b));
   //  printf("unsigned long int:%lu\n",sizeof(a+b));
   //  printf("float:%lu\n",sizeof(a+b));
   //  printf("char: %lu\n",sizeof(a+b));
   //  printf("unsigned char: %lu\n",sizeof(a+b));
   //  printf("double:%lu\n",sizeof(a+b));
   //  printf("long double:%lu\n",sizeof(a+b));

   return 0;
}
