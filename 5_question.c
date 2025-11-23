#include <stdio.h>
int main() {
    char input;
    printf("enter input :");
    scanf("%c", &input);
    if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u'||input=='A'||input=='E'||input=='I'||input=='O'||input=='U')
        printf("your input is vowel");
    else
        printf("your input is consonant");
}
