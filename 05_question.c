#include <stdio.h>
int main (){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    int count=0 ,temp_for_count=num,remainder_for_count;
    while (temp_for_count>0)
    {
        remainder_for_count=temp_for_count%10;
        temp_for_count/=10;
        count+=1;
    }
    int reamainder_for_loop,temp_for_loop=num,reverse=0;
    for(int i=0;i<count;i++){
        reamainder_for_loop=temp_for_loop%10;
        reverse=reverse*10+reamainder_for_loop;
        temp_for_loop/=10;
    }
    if(reverse==num){
        printf("Yes it is a palindrome");
    }
    else{
        printf("No is it not a palindrome");
    }
}