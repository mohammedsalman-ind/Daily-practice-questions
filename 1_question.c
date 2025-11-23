#include <stdio.h>
int main (){
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("Its an even number");
    }
    else{
        printf("Its an odd number");
    }
}