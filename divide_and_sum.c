#include <stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    int temp = num ;
    int temp2 = num ;
    int count=0,sum=0;
    while(temp>0){
        temp/=10;
        count+=1;
    }
    // printf("%d", count);
    for(int i=0;i<count;i++){
        int remainder =temp2%10;
        // printf("%d",remainder);
        sum+=remainder;
        temp2/=10;

    }
    printf("%d", sum );
    // return sum;

}
