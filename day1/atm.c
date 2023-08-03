#include<stdio.h>
int main()
{
    int amount;
    printf("enter the amount you want to withdrawl: ");
    scanf("%d",&amount);
    if (amount % 50 != 0)
    {
        printf("enter the amount in denomianations of 50");
    }
    else{
        int _2000,_500,_200,_100,_50;
        _2000 = amount / 2000;
        _500 = (amount % 2000)/500;
        _200 = ((amount%2000)%500)/200;
        _100 = (((amount%2000)%500)%200)/100;
        _50 = ((((amount%2000)%500)%200)%100)/50;
        printf("money dispensed as follows:\n");
        if(_2000>0)
        printf("No of 2000/- notes: %d\n",_2000);
        if(_500>0) 
        printf("No of 500/- notes: %d\n",_500);
        if(_200>0)
        printf("No of 200/- notes: %d\n",_200); 
        if(_100>0)
        printf("No of 100/- notes: %d\n",_100); 
        if(_50>0)
        printf("No of 50/- notes: %d\n",_50); 
    }
    
    return 0;
}