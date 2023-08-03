#include<stdio.h>
int main()
{


//1
    // int a,b,i,j,c,count;
    // printf("enter 2 numbers:\n");
    // scanf("%d%d",&a,&b);
    // printf("The prime numbers between %d ,%d are:\n",a,b);
    // for ( i = a,count=0; i <b; i++)
    // {
    //     for ( j = 1,c=0; j <=i; j++)
    //     {
    //         if(i%j==0)
    //         c++;
    //         if(c>2)
    //         break;
    //     }
    //     if(c==2)
    //     {printf("%d\n",i);
    //     count++;}
    // }
    // printf("total prime numbers are %d\n",count);


//2
    // int m,i,j,n,p,count=0;
    // printf("enter number of students:\n");
    // scanf("%d",&n);
    // for ( i = 1; i<=n; i++)
    // {
    //     printf("enter marks of student: %d\n",i);
    //     for ( j = 0,p=0; j <6; j++)
    //     {
    //         scanf("%d",&m);
    //         p+=m;
    //         if(j==5)
    //         p=p/6;
            
            
    //     }
    //     if(p>80)
    //         count++;
    // }
    // printf("students scored above 80 %% are:%d",count);
    

//3
    // int i,j,m,n,p,marks,top;
    // printf("enter number of students:\n");
    // scanf("%d",&n);
    // for ( i = 0; i<n; i++)
    // {
    //     printf("number of subjects of student %d:\n",i+1);
    //     scanf("%d",&m);
    //     for ( j = 1,p=0; j <=m; j++)
    //     {
    //         scanf("%d",&marks);
    //         p+=marks;            
    //         if(j==m)
    //         {p=p/m;
    //         printf("percentage:%d %%\n",p);}
    //     }
    //     if(i==0)
    //     top=p;
    //     else
    //     top=top>p?top:p;
    // }
    // printf("top %% is %d %%\n",top);
    
    
//4
// *
// * *
// * * *
// * * * *
// * * * * *
    // int i,j;
    // for ( i = 1; i <=5; i++)
    // {    
    //     for ( j = 1; j <=i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // i=1;
    // while (i<=5)
    // {
    //     j=1;
    //     while (j<=i)
    //     {
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }

    // i=1;
    // do
    // {
    //     j=1;
    //     do
    //     {
    //         printf("*");
    //         j++;
    //     } while (j<=i);
    //     printf("\n");
    //     i++;
    // } while (i<=5);

    //5
    // int i,j,c=1;
    // * * * * * 
    // * * * *   
    // * * *     
    // * *       
    // * 
    // for ( i = 5; i >=1; i--)
    // {
    //     for ( j = 1; j <=i; j++)
    //     {
    //         printf("* ");
    //     }
        
    //     printf("\n");
    // }
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         *
//         *
    // for ( i = 1; i <=5; i++)
    // {
    //     for ( j = 1; j <=5; j++)
    //     {
    //         if(j>=i)
    //         printf("* ");
    //         else
    //         printf("  ");
    //     }
        
    //     printf("\n");
    // }

//         *
//       * *
//     * * *
//   * * * *
// * * * * *         
    // for ( i = 5; i >=1; i--)
    //     {
    //         for ( j = 1; j <=5; j++)
    //         {
    //             if(j>=i)
    //             printf("* ");
    //             else
    //             printf("  ");
    //         }
            
    //         printf("\n");
    //     }
    

    // for ( i = 1; i <=5; i++)
    // {
    //     for ( j = 1; j <=5; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5    
    
    // for ( i = 1; i <=5; i++)
    // {
    //     for ( j = 1; j <=i; j++)
    //     {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5
    // for ( i = 1; i <=5; i++)
    // {
    //     for ( j = 1; j <=i; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }


    // for ( i = 1; i <=5; i++)
    // {
    //     for ( j = 1; j <=i; j++)
    //     {
    //         if(j%2==0 )
    //         printf("0");
    //         else if(j%2!=0)
    //         printf("1");
    //     }
    //     printf("\n");
    // }

    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10       
    // 11 12 13 14 15 
    
    // for ( i = 1; i <=5; i++)
    //     {
    //         for ( j = 1; j <=i; j++,c++)
    //         {
    //             printf("%d ",c);
    //         }
    //         printf("\n");
    //     }





    //6
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
    //  for ( i = 5; i >=1; i--)
    //     {
    //         for ( j = 1; j <=5; j++)
    //         {
    //             if(j>=i)
    //             printf("* ");
    //             else
    //             printf(" ");
    //         }
            
    //         printf("\n");
    //     }

// for ( i = 1; i <=5; i++)
//     {
//         for ( j = 1; j <=5; j++)
//         {
//             if(j>=i)
//             printf("* ");
//             else
//             printf(" ");
//         }
        
//         printf("\n");
//     }

//7
// int i,j,n=5;
// for (j=1, i = 1; i<=n*(n+1)/2; i++)
// {
//     printf("* ");
//     if(i==j*(j+1)/2)
//     {
//         printf("\n");
//         j++;
//     }
// }


//
int n=5, i, j, k;
	// printf("Enter the number: ");
	// scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		for(j = i; j <n; j++)
		{
			printf(" ");
		}
		for(k = 1; k < (i*2); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = 4; i >= 1; i--)
	{
		for(j = n; j > i; j--)
		{
			printf(" ");
		}
		for(k = 1; k < (i*2); k++)
		{
			printf("*");
		}
		printf("\n");
	}


















    return 0;
}