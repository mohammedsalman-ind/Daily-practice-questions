// bool isPowerOfFour(int n) {
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("it is Not power of 4");
    }
    else{
        while(n%4==0){
            n=n/4;
        }
        if(n==1){
            // return ;
            printf("Its is power of 4");
        }
        else{
            // return false;
            printf("IT is Not power of 4");
        }
    }
}