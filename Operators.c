// arthmetic +,-,/,%
// logical and -> && (all condition true)
// logical or -> || (1 condition true) 
// true -> 1, false => 0
#include <stdio.h>
int main (){
    int a=10;
    int b=12;
    printf("%d",a>5 && b>5);
    // printf("salman is best ");
    if((a>5) && (b>5)){
        printf("yes both true");
    }
    if((a>5) || (b>17)){
        printf("yes both true");
    }
}
