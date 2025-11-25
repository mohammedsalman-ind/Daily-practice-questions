#include <stdio.h>
int main (){
    int age;
    scanf("%d",&age);
    if(age<18){
        printf("You are not adult");
    }
    else if(age>=18){
        printf("You are adult");
    }
    else{
        printf("invalid input");
    }

}
