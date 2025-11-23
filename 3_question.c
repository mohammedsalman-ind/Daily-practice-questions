#include <stdio.h>
int main() {
    char ch_element;
    printf("enter input: ");
    scanf("%c", &ch_element);
    if((ch_element>=65&&ch_element<=90)||(ch_element>=97&&ch_element<=122))
        printf("Your input is alpha bet");
    else if(ch_element>=48&&ch_element<=57)
        printf("Your input is digit");
    else
        printf("Your input is special character");
}
