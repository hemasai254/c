#include<stdio.h>
int main()
{
    int a,b,i,j,x,y;
    printf("input:\n");
    scanf("%d%d",&a,&b);
    for ( i = 1,y=a; i <b; i++)
    {
        for ( j = 1,x=0; j <=a; j++)
        {
            x+=y;
        }
        y=x;
    }
    printf("output: %d\n",y); 


    // int i,n;
    // float j,f,osum=0,esum=0;
    // printf("enter n value:\n");
    // scanf("%d",&n);
    // for ( i = 1; i <=n; i++)
    // {
    //     if (i%2==1)
    //     {
    //         for ( f=1,j=1; j <=i; j++)
    //         {
    //             f*=j;
            
    //         }
    //         osum=osum+(1.0/f);
    //     }
    //     else if (i%2==0)
    //     {
    //         for ( f=1,j = 1; j <=i; j++)
    //         {
    //             f*=j;
            
    //         }
    //         esum=esum+(1.0/f);
    //     }
        
    // }
    // printf("output: %f\n",osum+esum);



    
 int d1,d2,m1,m2,y1,y2;
    printf("enter date of birth of first candidate:\n");
    scanf("%d-%d-%d",&d1,&m1,&y1);
    printf("enter date of birth of second candidate:\n");
    scanf("%d-%d-%d",&d2,&m2,&y2);
    printf("output:");
    if(y1<y2)
    printf("%d-%d-%d ",d1,m1,y1);
    else if (y1>y2)
    printf("%d-%d-%d ",d2,m2,y2);
    else if(m1>m2)
    printf("%d-%d-%d ",d2,m2,y2);
    else if(m2>m1)
    printf("%d-%d-%d ",d1,m1,y1);
    else if(d1>d2)
    printf("%d-%d-%d ",d2,m2,y2);
    else if(d2>d1)
    printf("%d-%d-%d ",d1,m1,y1);
    else
    printf("%d-%d-%d ",d1,m1,y1);
























    
    return 0;
}














//   int i,n;
//   float factorial = 1;
//   float sum = 1;

//   printf("Enter n value: ");
//   scanf("%d", &n);

//   for ( i = 2; i <= n; i++) {
//     factorial *= i;
//     sum += (-1) * (1 / factorial);
//   }

//   printf("output: %f\n", sum);
