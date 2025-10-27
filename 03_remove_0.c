#include <stdio.h>
int main (){
    // taking input
    long long num;
    printf("Enter your name :");
    scanf("%lld",&num);

    // count or length
    long long count=0;
    long long temp=num;
    long long rem;
    while (temp>0)
    {
        rem=temp%10;
        temp/=10;
        count+=1;
    }

    // reverse the string
    long long rev=0;
    long long rem2;
    long long temp2=num;
    for(int i =0; i<count; i++){
        rem2=temp2%10;
        rev= rev*10+rem2;
        temp2/=10;
    }
    //remove zero 
    long long rem3;
    long long temp3=num;
    printf(" Your number without 0 is :");
    for(int j=0;j<count;j++){
        rem3=rev%10;
        if(rem3!=0){
            printf("%d",rem3);
        }

        rev/=10;

    }
    
}