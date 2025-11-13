#include <stdio.h>
int main (){
    int sum1=0;
    int num;
    scanf("%d",&num);
    for(int i =1 ;i<=num;i++){
        sum1+=i;// sum = sum+i 
    }
    printf("%d",sum1);
}