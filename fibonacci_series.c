#include <stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    if(num==1){
        printf("1");
    }
    else{
        int a=0,b=1;
        printf("%d ,",a);
        printf("%d",b);
        for(int i=0;i<=num;i++){
            int c=a+b;
            a=b;
            b=c;

            printf(", %d  ",c);

        }
        
    }
}
// 0,1,1,2,3,5,8,13..........
