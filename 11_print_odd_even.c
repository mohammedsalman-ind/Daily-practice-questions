#include <stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    int odd=0,even=0;
    for(int i =1; i<=num;i++){
        if(i%2!=0){
            // num+=i
            odd+=i;
        }
        else if(i%2==0){
            even+=i;
        }
    }
    printf("%d odd",odd);
    printf("\n");
    printf("%d even",even);

}