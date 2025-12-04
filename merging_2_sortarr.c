#include <stdio.h>
int main (){
    int arr[6]={1,2,3,0,0,0};
    int arr2[3]={2,5,6};
    int temp[6];
    int j=0;
    for(int i=0;i<6;i++){
        if(i<3){
            temp[i]=arr[i]; // 1,2,3

        }
        for(int j=0;j<6;j++){
            if(j>=3){
                temp[j]=arr2[j];
        }
        }
    }
    for(int i=0;i<6;i++){
        printf("%d",temp[i]);
    }
}
