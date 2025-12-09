#include <stdio.h>
int main (){
    int arr[]={5,2,11,23,43,1};
    int temp;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(arr[j]>arr[j+1]){
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
        printf("\n");
        
    }
}
