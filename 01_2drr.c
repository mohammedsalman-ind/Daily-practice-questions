// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int onedarr[4]={10,23,21,3};
    for(int i=0; i<4;i++){
        // printf("%d",onedarr[i]);
    }
    // int two d arry  collection of 1d arry
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; 
    // {1,2,3,4
    // ,5,6,7,8,
    // 9,10,11,12}
    for(int i=0; i<4;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[j][i]);// num of element in 1d arry ,i num of arr
        }
        printf("\n");
    }
}