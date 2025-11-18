// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int onedarr[4]={10,23,21,3};
    for(int i=0; i<4;i++){
        // printf("%d",onedarr[i]);
    }
    // int two d arry  collection of 1d arry
    int arr[3][4]={1,1,1,1,1,1,1,1,1,1,1,1}; 
    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}