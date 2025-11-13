#include <stdio.h>
int main (){
    int factorial=1;
    int num=4;
    for(int i=num;i>0;i--){
        factorial*=i;
    }
    printf("%d",factorial);
}