#include<stdio.h>
//1
// void printAllPrimes();
// int isPrime(int a, int b);

// int main()
// {
//     int a,b;
//     printf("enter 2 numbers:\n");
//     scanf("%d%d",&a,&b);
//     isPrime(a,b);
//     return 0;
// }
// int isPrime(int a,int b){
//     int i,j,c=0;
//     for ( i = a; i <b; i++)
//     {
//         for( j = 1,c=0; j <=i; j++)
//         {
//             if(i%j==0)
//             c++;
//             if (c>2)
//             break;
//         }
//     if(c==2)
//     printAllPrimes(i);      
//     }   
// }

// void printAllPrimes(int i){
//     printf("%d\n",i);
// }

//2
int power(int, int);
int sum(int,int);
int main()
{
    int a,b,x;
    printf("input:\n");
    scanf("%d%d",&a,&b);
    x=power(a,b);
    printf("%d",x); 
}

int power(int a, int b){
    int i,x,y;
    for ( i = 1,y=a; i <b; i++)
    {
        y=sum(a,y);
    }
    // printf("output: %d\n",y);
    return y;

}

int sum(int a,int y){
    int j,x;
    for ( j=1,x=0; j<=a; j++)
        {
            x+=y;
        }
        // y=x;
        return x;
}

// int sum(int a,int y)
// {
// int x=0;
// for(int j=1;j<=a;j++)
// {
// x+=y;
// }
// return x;
// }

// int power(int a,int b)
// {
// int x,y,i,j;
// for(i=1,y=a;i<b;i++)
// {
// y=sum(a,y);
// }
// return y;
// }

// int main()
// {
// int a,b,n;
// printf("Enter two values :");
// scanf("%d%d",&a,&b);
// n=power(a,b);
// printf("Result=%d\n",n);
// }
//3
// int factorial(int);

// int main(){
//     int n,x;
//     printf("enter a number:\n");
//     scanf("%d",&n);
//     x=factorial(n);
//     printf("%d",x);
// }

// int factorial(int a){
//     int i,x;
//     for ( x=1,i = 1; i <=a; i++)
//             x*=i;
//     return x;
// }