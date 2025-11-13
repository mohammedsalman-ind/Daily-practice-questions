#include <stdio.h>
int main (){
    int num,remainder;
    scanf("%d",&num);
    int temp= num;
    while (temp>0)
    {
        remainder=temp%10;
        temp/=10;
        printf("%d",remainder);
    }
    // printf("%d", remainder);
    
}