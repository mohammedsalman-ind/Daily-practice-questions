#include <stdio.h>
int main (){
    int num; 
    printf("Enter your month numeber :");
    scanf("%d", &num);
    if(num%2!=0){
        printf("31 days");
    }
    else if(num==2){
        printf("28 days");
    }
    else{
        printf("30 days");
    }

}