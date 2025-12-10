#include <stdio.h>
int main (){
    int res=0;
    int arr1[2][2]={1,2,3,4};
    int arr2[2][2]={1,2,3,4};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res=arr1[i][j]+arr1[i][j];
            printf(" ");
            printf("%d",res);
        }
        printf("\n");
    }

}
