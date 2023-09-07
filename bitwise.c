/*1. Write a Macro's Set, clear and toggle n'th bit using bit wise operator?*/
// #include<stdio.h>
// #define SET(x,p) x|(0x1<<p)
// #define CLEAR(x,p) x&(~(0x1<<p))
// #define TOGGLE(x,p) x^(0x1<<p)
// #define CHECK(x,p) x&(0x1<<p)

// int main(){
//     int a,p;
//     printf("enter number and position:\n");
//     scanf("%d %d",&a,&p);
//     printf("Set bit:%d\n",SET(a,p));
//     printf("Clear bit:%d\n",CLEAR(a,p));
//     printf("Toggle bit:%d\n",TOGGLE(a,p));
//     CHECK(a,p)?printf("ON"):printf("OFF");

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*2. WAP print binary?*/
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter decimal number:");
    scanf("%d",&n);
    for(i=0;i<32;i++){
        if(n&(0x80000000))
        printf("1");
        else
        printf("0");
        n=n<<1;
    }
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*3. WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?*/
#include<stdio.h>
#define CHECK(x,p) x&(0x1<<p)
int main(){
    int a,i,c,p=0;
    printf("enter a number: \n");
    scanf("%d",&a);
    for(i=0,c=0;i<20;i++,p++){
        if(CHECK(a,p))
        c++;
    }
    printf("%d",c);
    return 0;
}
#include<stdio.h>
int main()
{
	int a,i,c=0;
	printf("enter a number:");
	scanf("%d",&a);
	for(i=0;i<32;i++)
	{
		if(a&0x80000000)
			c++;
		a=a<<1;
	}
	printf("no of 1's:%d",c);
	return 0;
}


/*model-2*/
#include<stdio.h>
int main()
{
	int a,c=0;
	printf("enter a number:");
	scanf("%d",&a);
	while(a>0)
	{
		a=a&(a-1);
		c++;
	}
	printf("no of 1's:%d",c);
	return 0;
}



/*model-3*/

#include<stdio.h>
int main()
{
	int a[256]={0, 1, 1, 2, 1, 2, 3, 1, 2, 2, 3, 2, 3, 4, 4, 1,
    2, 2, 3, 2, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4,
    5, 4, 5, 5, 6, 1, 2, 2, 3, 2, 3, 4, 3, 4, 4, 5,
    2, 3, 3, 4, 3, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4, 3,
    4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 6, 5, 6, 6,
    7, 1, 2, 2, 3, 2, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4,
    3, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4, 3, 4, 5, 4, 5,
    5, 6, 3, 4, 4, 5, 4, 5, 6, 5, 6, 6, 7, 2, 3, 3,
    4, 3, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 6, 5,
    6, 6, 7, 3, 4, 4, 5, 4, 5, 6, 5, 6, 6, 7, 4, 5,
    5, 6, 5, 6, 7, 6, 7, 7, 8};
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("no of 1's:%d",a[n-1]);
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
/*4. WAP implement subtraction functionality with out using SUB('-') Operator.    */
#include<stdio.h>

int main(){
    int a,b,x;
    printf("enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    x= a+(~b+1);
    printf("%d",x);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*5. WAP implement addition functionality with out using ADD('+') Operator.*/
#include<stdio.h>

int main(){
    int a,b,x;
    printf("enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    x=(a-(~b)-1);
    printf("%d",x);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*6. WAP implement XOR functionality with out using XOR(^) operator.*/
#include<stdio.h>

int main(){
    int a,b,x;
    printf("enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    x=(~a&b)|(a&~b);
    printf("%d",x);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*7. WAP to implement the sizeof operation using the bitwise operator.  */

#include<stdio.h>
int fun1();
int fun2();
int fun3();
int fun4();
int main()
{
	int a,x;
	printf("1)int size\n2)char size\n3)long int size\n4)short int size\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1: x=fun1();
			printf("size of int :%d",x/8);
			break;
		case 2: x=fun2();
                          printf("size of char :%d",x/8);
                          break;
		case 3: x=fun3();
                          printf("size of long int :%d",x/8);
                          break;
		case 4: x=fun4();
                          printf("size of short int :%d",x/8);
                          break;
	}
	return 0;
}
int fun1()
{
	int a=1,c=0;
	while(a)
	{
		c++;
		a=a<<1;
	}
	return c;
}
int fun2()
{
	char a=1,c=0;
	while(a)
	{
		c++;
		a=a<<1;
	}
	return c;
}
int fun3()
{
	long int a=1,c=0;
	while(a)
	{
		c++;
		a=a<<1;
	}
	return c;
}
int fun4()
{
	short int a=1,c=0;
	while(a)
	{
		c++;
		a=a<<1;
	}
	return c;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// /*8. WAP to convert Little endian integer to Big endian integer */
#include<stdio.h>

int main(){
    int a,x;
    printf("enter a integer:\n");
    scanf("%x",&a);
    x=(a<<24)&(0xff000000)|(a<<8)&(0x00ff0000)|((a>>8)&(0x0000ff00))|((a>>24)&(0x000000ff));
    printf("%x",x);
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/*9. WAP multiply a number by 9 using bit shift.*/
#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("%d",(a<<3)+a);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*10. WAP whether a number is ODD or EVEN using bitwise.*/
#include<stdio.h>
#define CHECK(x,p) x&(0x1<<p)

int main(){
    int a,p=0;
    printf("enter number:\n");
    scanf("%d",&a);
    CHECK(a,p)?printf("Odd"):printf("Even");
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*11. WAP whether a number is a power of 2 or not?*/
#include<stdio.h>
#define CHECK(x,p) x&(0x1<<p)
int main(){
    int a,i,c,p=0;
    printf("enter a number: \n");
    scanf("%d",&a);
    for(i=0,c=0;i<20;i++,p++){
        if(CHECK(a,p))
        c++;
    }
    if(c==1)
    printf("power of 2");
    else 
    printf("Not a power of 2");
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*12. WAP Check if the 20th bit of a 32-bit integer is on or off?*/
#include<stdio.h>
#define CHECK(x,p) x&(0x1<<p)
int main(){
    int a,p=20;
    printf("enter a number:\n");
    scanf("%d",&a);
    CHECK(a,p)?printf("ON"):printf("OFF");
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*13. Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).*/

#include<stdio.h>
void fun(int x,int y,int p,int n);
void fun1(int sum);
int main()
{
	int x,y,p,n;
	printf("enter two numbers:");
	scanf("%d%d",&x,&y);
	printf("enter bits to strip and at which position:");
	scanf("%d%d",&p,&n);
	fun1(x);
	fun1(y);
	fun(x,y,p,n);
	return 0;
}
void fun(int x,int y,int p,int n)
{
	int i,sum=0x0;
	// for(i=0;i<n;i++)
	// {
	// 	s=y&(0x1<<i);
	// 	sum=sum|s;
	// }
	sum=y&(~(0xff<<n));
	sum=sum<<(p-n)+1;
	fun1(sum);
	for(i=0;i<n;i++)
	{
		x=x&(~(0x1<<p));
		p--;
	}
	fun1(x);
	sum=x|sum;
	printf("result\n");
	fun1(sum);
}
void fun1(int sum)
{
	for(int i=0;i<8;i++)
	{
		if(sum&0x80)
			printf("1");
		else
			printf("0");
		sum=sum<<1;
	}
	printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
/*14. WAP Swap any two numbers using bitwise operators. How does it work?*/

#include<stdio.h>

int main(){
	int a,b;
	printf("enter numbers:");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swap a=%d\n b=%d\n",a,b);
	printf("123");
	return 0;
}


