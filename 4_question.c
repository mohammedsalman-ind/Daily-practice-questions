#include <stdio.h>
int main() {
    int m, n , o;
    printf("enter number 1: ");
    scanf("%d" , &m);
    printf("enter number 2: ");
    scanf("%d", &n);
    printf("enter number 3: ");
    scanf("%d", &o);
    if(m>n &&m>0){
        printf("number 1 is largest");
    }
    else if(n>m &&n>o){
        printf("number 2 is largest");
    }
    else{
        printf("number 3 is largest");
    }
}