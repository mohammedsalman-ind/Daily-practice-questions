#include <stdio.h>
int main (){
    int sum =0;
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter number :");
        printf("\n");
        scanf("%d",&arr[i]);
    }
    for(int i =0 ; i<5;i++){
        sum+=arr[i];
    }
    printf("THis is sum :");
    printf("%d",sum);


}