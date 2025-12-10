#include <stdio.h>
int main (){
    int res=0;
    int arr1[2][3]={1,2,3,4,5,6};
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            res=0;
            for(int k=0;k<3;k++){
                res+=arr1[i][k]*arr2[k][j];
                // printf("%d",res);
                printf(" ");
            }
            printf("%d",res);

        }
        printf("\n");
    }
}
