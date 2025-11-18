#include <stdio.h>

int main() {
    int r1=0,r2=0,r3=0,sum=0;
    int onedarr[4]={10,23,21,3},max=0;
    for(int i=0; i<4;i++){
        // printf("%d",onedarr[i]);
    }
    // int two d arry  collection of 1d arry
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; 
    // {1,2,3,4
    // ,5,6,7,8,
    // 9,10,11,12}
    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            // sum=arr[i];
            
            if(i==0){

                r1+=arr[i][j];
            }
            else if(i==1){
                r2+=arr[i][j];
            }
            else if(i==2){
                r3+=arr[i][j];
            }
        }
    }
        printf("\n");
        printf("%d",r1);
        printf("%d",r2);
        printf("%d",r3);
    }
    // printf("%d",max);

    // if (i==1){r1+=arr[i][j];}
    // if (i==2){r2+=arr[i][j];}
    // if (i==3){r3+=arr[i][j];}