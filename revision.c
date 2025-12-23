#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    //0
    if(n==0){
        printf("Num is zero");
    }
    else if(n<0){
        printf("Num is neg");
    }
    else{
        printf("num is positve");
    }
}
