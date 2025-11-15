#include <stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    int sum=0,temp1,temp2,remainder,count=0;
    temp1=num;
    while (temp1>0)
    {
        temp1/=10;
        count+=1;
    }
    temp2=num;
    for(int i =0;i<count;i++){
        remainder=temp2%10;
        sum+=remainder*remainder*remainder;
        temp2/=10;
    }
    if(num==sum){
        printf("Yes it is an armstrong number ");
    }
    else{
        printf("No it is not an armstrong number ");
    }
}
