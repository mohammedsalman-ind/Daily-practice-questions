int countPartitions(int* nums, int numsSize) {

    int total=0;
    int sum2=0;
    int count=0;
    int sum1=0;
    for (int i=0;i<numsSize;i++){
        total=total+nums[i];
        sum1=sum1+nums[i];
    }
    for(int j=1;j<numsSize;j++){
        sum2=total-sum1;
        if(sum1%2==0 && sum2%2==0){
        count++;
        }
    }
    return count;
}
