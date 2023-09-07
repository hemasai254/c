// #include<stdio.h>
// int count_bits(int);
// int main(){
//     int a,x;
//     printf("enter a number:\n");
//     scanf("%d",&a);
//     x=count_bits(a);
//     printf("%d",x);
//     return 0;
// }

// int count_bits(int a){
//     int c,i,p;
//     c=i=p=0;
//     for(i=0;i<32;i++,p++){
//         if(a&(0x01<<p))
//         c++;
//     }
//     return c;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>

// int main(){
//     unsigned int a;
//     printf("enter a number:\n");
//     scanf("%x",&a);
//     printf("%x\n",a>>20);
//     printf("%x\n",a & 0xfffff);
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// int testbit(short int, int);
// int main(){
//     short int a;
//     int p,x;
//     printf("enter a 16-bit value:\n");
//     scanf("%d",&a);
//     printf("enter a value ranging 1 to 15:\n");
//     scanf("%d",&p);
//     x=testbit(a,p);
//     if(x==1)
//     printf("true");
//     else
//     printf("false");
//     return 0;
// }

// int testbit(short int a, int p){
//     if(p>15)
//     return 0;
//     if(a&(0x01<<p))
//     return 1;
//     else
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
short int ToDate(int,int,int);
int date(short int);
int month(short int);
int year(short int);
int main(){
    int m,d,y;
    short int x;
    printf("enter any date in DD-MM-YYYY format:\n");
    scanf("%d/%d/%d",&d,&m,&y);
    x=ToDate(d,m,y);
    printf("%hd\n",x);

    int d1=date(x);
    int m1=month(x);
    int y1=year(x);
    printf("%d/%d/%d\n",d1,m1,y1);
    return 0;
}
short int ToDate(int d,int m,int y){
    y=y%100;
    short int x,z;
    // x=(m<<5)|(d&0x1f);
    // z=(x<<7)|(y&0x7f);
    // z=z&0xffff;
    z=(m<<12)|(d<<7)|y;
    return z;
}
// //////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// int date(short int);
// int month(short int);
// int year(short int);
// int main(){
    // short int x;
    // int d,m,y;
    // printf("enter any 16-bit date value:\n");
    // scanf("%hd",&x);
    // d=date(x);
    // m=month(x);
    // y=year(x);
    // printf("%d/%d/%d",d,m,y);
//     return 0;
// }
int date(short int x){
    int d;
    d=x>>7;
    d=d&0x01f;
    return d;
}
int year(short int x){
    int y;
    y=x&0x7f;
    return y;
}
int month(short int x){
    int m;
    m=(x>>12)&(0xf);
    return m;
}