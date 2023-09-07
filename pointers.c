#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*1 Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).*/
// int main(){
//     int a= 45;
//     int *ptr = &a ;
//     int _a= *ptr;
//     printf("%p\n",&a);
//     printf("%d\n",a);
//     printf("%d\n",sizeof(a));
//     printf("%p\n",ptr);
//     printf("%d\n",sizeof(*ptr));
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*2 Write a program to add two variables using thier pointers.
*/
//     int main(){
//     int a=5;
//     int b=10;
//     int *_a=&a;
//     int *_b=&b;
//     printf("%d",*_a+*_b);
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*4 Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.
*/
// int main(){
//     int a=5;
//     int b=10;
//     int c=15;
//     int *ptr=&a;
//     printf("%d\n",*ptr);
//     ptr = &b;
//     printf("%d\n",*ptr);
//     ptr = &c;
//     printf("%d\n",*ptr);

// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*3 Write a program to take input for two character variables using pointers and find out which character has higher ascii value.
*/
// int main(){
//     char a,b;
//     char *ptr1, *ptr2;
//     printf("enter any 2 charcters:\n");
//     scanf(" %c %c",&a,&b);
//     ptr1=&a;
//     ptr2=&b;
//     printf("%d\n",*ptr1);
//     printf("%d\n",*ptr2);
//     if(*ptr1>*ptr2)
    
//     printf("%c has higher ascii value",a);
//     else
//     printf("%c has higher ascii value",b);
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*5 Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.
*/
// int main(){
//     int *ptr1,*ptr2,*ptr3;
//     int a=10;
//     ptr1=&a;
//     ptr2=&a;
//     ptr3=&a;
//     printf("%d\n",*ptr1);
//     printf("%d\n",*ptr2);
//     printf("%d\n",*ptr3);
//     a=15;
//     printf("%d\n",*ptr1);
//     printf("%d\n",*ptr2);
//     printf("%d\n",*ptr3);
//     *ptr1=20;
//     printf("%d\n",*ptr1);
//     *ptr2=25;
//     printf("%d\n",*ptr2);
//     *ptr3=30;
//     printf("%d\n",*ptr3);
//     printf("%d",a);
//     return 0;

// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*6 declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?
*/
// int main(){
//     int *ptr1;
//     float *ptr2;
//     char *ptr3;
//     double *ptr4;
//     printf("%d\n%d\n%d\n%d\n",sizeof(ptr1),sizeof(ptr2),sizeof(ptr3),sizeof(ptr4));
//     return 0;
// }
/*Why do u think all of them are giving same size irrespective of the data type ?
because all of them store memory address
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*7 Write a program to find the biggest of three numbers using pointers that point to those numbers.
*/
// int main(){
//     int a,b,c;
//     printf("enter 3 numbers:\n");
//     int *ptr1,*ptr2,*ptr3;
//     ptr1=&a;
//     ptr2=&b;
//     ptr3=&c;
//     scanf("%d %d %d",ptr1,ptr2,ptr3);

//     // printf("%d\n%d\n%d\n",*ptr1,*ptr2,*ptr3);

//     if((*ptr1>*ptr2) && (*ptr1>*ptr3))
//     printf("%d is bigger",*ptr1);
//     else if((*ptr2>*ptr1) && (*ptr2>*ptr3))
//     printf("%d is bigger",*ptr2);
//     else if((*ptr3>*ptr1) && (*ptr3>*ptr2))
//     printf("%d is bigger",*ptr3);
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*8 Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.
*/
// int main(){
//     int x=1,y=2,z=3;
//     printf("%d\t%d\t%d\t\n",x,y,z);
//     int *a=&x, *b=&y, *c=&z;
//     int p=*a;
//     *a=*b;
//     *b=*c;
//     *c=p;
//     printf("%d\t%d\t%d\t",x,y,z);
//     return 0;

// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*9 Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.
*/
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,0};
//     int *ptr;
//     for(int i=0;i<10;i++)
//     {
//         ptr=&arr[i];
//         printf("address: %p\n",ptr);
//         printf("value: %d\n",*ptr);
//     }
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*1 Write a program to swap two numbers using Call by Value and Call by Reference.
*/
void swap(int,int);
void swap_P(int *a, int *b);

int main(){
    int a=10,b=20;
    swap(a,b);
    printf("main : a=%d, b=%d\n",a,b);
    swap_P(&a,&b);
    printf(" main: a=%d, b=%d\n",a,b);
    return 0;
}
void swap(int a, int b){
    int x=a;
    a=b;
    b=x;
    printf("a=%d, b=%d\n",a,b);
}

void swap_P(int *a, int *b){
    int x=*a;
    *a=*b;
    *b=x;
    printf("a=%d, b=%d\n",*a,*b);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*3 Write a function that can rotate the values of three variables. print the results in main function.
*/
// void swap_P(int *a, int *b, int *c);

// int main(){
//     int a=10,b=20, c=30;
//     swap_P(&a,&b,&c);
//     printf(" main: a=%d, b=%d, c=%d\n",a,b,c);
//     return 0;
// }
// void swap_P(int *a, int *b, int *c){
//     int x=*a;
//     *a=*b;
//     *b=*c;
//     *c=x;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*4 Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.
*/
// void calculator(int *a, int *b);
// int  *add1,*diff1,*mul1,*quo1,*rem1;
// int main(){
//     int a,b;
//     printf("enter 2 values:\n");
//     scanf("%d %d",&a,&b);
//     calculator(&a,&b);
//     printf("Sum: %d\n",add1);
//     printf("Difference: %d\n",diff1);
//     printf("Product: %d\n",mul1);
//     printf("Quotient: %d\n",quo1);
//     printf("Remainder: %d\n",rem1);
//     return 0;
// }

// void calculator(int *a, int *b){
//     add1=*a+*b;
//     diff1=*a-*b;
//     mul1=*a**b;
//     quo1=*a / *b;
//     rem1=*a%*b;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*5 "Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main."*/


//////////////////////////////////////////////////////////////////////////////////////////////////////
/*6 Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.
*/    

// //main.c
// void swap(int arr[]);

// int main(){
//     int arr[2]={1,2};
//     swap(arr);
//     printf("a=%d, b=%d", arr[0],arr[1]);

// }
// //swap.c
// void swap(int arr[]){
//     int x= arr[0];
//     arr[0]= arr[1];
//     arr[1]=x;
// }


// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int *ptr=arr;
//     for(int i=0; i<6;i++)
//     {
//         printf("%d\n",*(ptr++));
//     }
// }