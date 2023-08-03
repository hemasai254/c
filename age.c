#include<stdio.h>
int main()
{
//    int d,m,y;
//    printf("enter the date:\n");
//    scanf("%d-%d-%d",&d,&m,&y);
//    switch (y)
//    {
//    case 1900 ... 2200: switch(y % 100 != 0 && y % 4 == 0 || y%400 ==0)
//                         {
//                         case 1:switch(m)
//                                 {
//                                 case 1:
//                                 case 3:
//                                 case 5:
//                                 case 7:
//                                 case 8:
//                                 case 10:
//                                 case 12: switch(d)
//                                         {
//                                         case 1 ... 31: printf("valid date"); break;
//                                         default: printf("invalid date");break;
//                                         }
//                                         break;       
//                                 case 4:
//                                 case 6:
//                                 case 9:
//                                 case 11:switch(d)
//                                         {
//                                         case 1 ... 30: printf("valid date");break;
//                                         default: printf("invalid date");break;
//                                         }
//                                         break;
//                                 case 2:switch(d)
//                                         {
//                                         case 1 ... 29: printf("valid date");break;
//                                         default: printf("invalid date");break;
//                                         }
//                                         break;
//                                 default: printf("invalid date");
//                                 break;
//                                 }
//                                 break;
//                         case 0:switch(m)
//                                 {
//                                 case 1:
//                                 case 3:
//                                 case 5:
//                                 case 7:
//                                 case 8:
//                                 case 10:
//                                 case 12: switch(d)
//                                         {
//                                         case 1 ... 31: printf("valid date");break;
//                                         default: printf("invalid date");break;
//                                         }
//                                         break;
//                                 case 4:
//                                 case 6:
//                                 case 9:
//                                 case 11:switch(d)
//                                         {
//                                         case 1 ... 30: printf("valid date");break;
//                                         default: printf("invalid date");break;
//                                         }
//                                         break;
//                                 case 2:switch(d)
//                                         {
//                                         case 1 ... 28: printf("valid date");break;
//                                         default: printf("invalid date");break;
//                                         }
//                                         break;
//                                 default: printf("invalid date");
//                                 break;
//                                 }
//                                 break;
//                         default: printf("invalid date"); 
//                         break;
//                         }
//                         break;
//    default: printf("invalid date");
//    break;
    
//    }
    
    
//     return 0;
// }





































 int d1,d2,m1,m2,y1,y2;
    printf("enter date of birth of first candidate:\n");
    scanf("%d-%d-%d",&d1,&m1,&y1);
    printf("enter date of birth of second candidate:\n");
    scanf("%d-%d-%d",&d2,&m2,&y2);
    if(y1<y2)
    printf("person born on %d-%d-%d is older",d1,m1,y1);
    else if (y1>y2)
    printf("person born on %d-%d-%d is older",d2,m2,y2);
    else if(m1>m2)
    printf("person born on %d-%d-%d is older",d2,m2,y2);
    else if(m2>m1)
    printf("person born on %d-%d-%d is older",d1,m1,y1);
    else if(d1>d2)
    printf("person born on %d-%d-%d is older",d2,m2,y2);
    else if(d2>d1)
    printf("person born on %d-%d-%d is older",d1,m1,y1);
//     else if (y1==y2 && m1==m2 && d1==d2)
        else
    printf("both are of same age");
    return 0;
}