#include <stdio.h>
int main() {
    int m, n;
    printf("enter number 1: ");
    scanf("%d" , &m);
    printf("enter number 2: ");
    scanf("%d", &n);
    if(m>n)
        printf("number 1 is largest");
    else
        printf("number 2 is largest");
}