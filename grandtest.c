#include<stdio.h>
void rotate(int arr[],int,int);
int main(){
    int n,d,i;
    printf("enter array size and elements to be rotated \n");
    scanf("%d %d",&n,&d);
    int arr[n];
    printf("enter values of array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rotate(arr,d,n);
    return 0;
}
void rotate(int arr[],int d, int n){
    for(int i=0;i<d;i++){
        int temp=arr[0];
        // printf("%d\n",temp);
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    for(int k=0;k<n;k++){
        printf("%d",arr[k]);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>

// int main(){
    
//     int n,i,c=0;
//     printf("enter number of elements in an array");
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         if(arr[i]==0)
//         c++;
//     }
//     int arr1[n],j=0;
//     for(i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr1[j]=arr[i];
//             j++;
//         }
//         else
//         continue;
//     }
//     for(i=0;i<n-c;i++){
//         arr[i]=arr1[i];
//     }
//     for(i=n;c;c--,i--){
//         arr[i-1]=0;
//     }
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////
