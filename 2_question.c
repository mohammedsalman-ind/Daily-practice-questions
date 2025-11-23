#include <stdio.h>
int main (){
    int factorial=1;
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
        factorial*=i;
    }
    printf("%d",factorial);
}
// 3628800