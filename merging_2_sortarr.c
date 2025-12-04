#include <stdio.h>
int main (){
    int arr[6]={1,2,3,0,0,0};
    int arr2[3]={2,5,6};
    int temp[6];
    int k=3;
    for(int i=0;i<3;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<3;i++){
        temp[k]=arr2[i];
        k++;
    }
    for(int n=0;n<6;n++){
        printf("%d",temp[n]);
    }
}
