#include <stdio.h>
int main (){

    int nums[3] = {3,2,4};
    int target=6;
    int arr[2];
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=3;j>0;j--){
            if(nums[i]+nums[j]==target){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
}
