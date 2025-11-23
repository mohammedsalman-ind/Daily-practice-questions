#include <stdio.h>
int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    int count = 0;
    while (num>0)
    {
        num/=10;
        count+=1;
    }
    printf("%d",count);
    
}