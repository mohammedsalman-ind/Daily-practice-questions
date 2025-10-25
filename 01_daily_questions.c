#include <stdio.h>
#include <math.h>
int main (){
    // declaration
    long long result=0;
    int final=0;
    long long num ;
    scanf("%lld",&num);
    int count=0;
    long long copy=num;
    //length of a number
    if (copy==0){
        // printf("the number of digit in num is 1 ","\n");
    }
    else{
        while (copy>0)
        {
            int rem =copy%10;
            copy/=10;
            count+=1;
        }
        // printf("the number of digit in num is %d", count);
    
    }
    // check armstrng number or not
    long long temp=num;
    for(int i =0; i<=count; i++){
        long long remainder=temp%10; // 153 , 153%10=3 ,15%10=5,1%10=1
        result += round(pow(remainder,count)); //27=0+27,152=27+125,153=1+152
        temp/=10; // 153/10=15,15/10=1,
    }
    if(result==num){
        printf("Yes this is a armstrng number ");
    }
    else{
        printf("No this is not armstrng number");
    }

}
