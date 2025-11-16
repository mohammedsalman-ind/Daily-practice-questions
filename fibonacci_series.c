#include <stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    if(num==1 || num==0){
        printf("0");
    }
    else{
        int a=0,b=1;
        printf("%d , ", a);
        printf("%d",b);
        for(int i=1;i<=num-2;i++){
            int c=a+b;
            printf(" , %d  ",c);
            a=b;
            b=c;


        }
        
    }
}
// 0,1,1,2,3,5,8,13..........
