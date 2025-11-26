#include<stdio.h>
int main(){
    int a=10,b=12,c=14;
    (a>b && a>c ? printf("%d is the largest", a) : b>a && b>c ? printf("%d is the largest", b) : printf("%d is the largest", c));
}
