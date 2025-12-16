#include <stdio.h>
int main(){
        int numsSize=5;
        int nums[5]= {1,2,1,1,2};
        float count=0;
        int maj=(numsSize/2.0);
        for(int i=0;i<numsSize;i++){
            count=1;
            for(int j=i+1;j<numsSize;j++){
                if(nums[i]==nums[j]){
                count+=1;
            }
        }
        if(count>maj){
            printf("%d",nums[i]);
            break;
        }
    }
}

