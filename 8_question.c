#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char operation;
    printf("enter number: ");
    scanf("%d", &num);
    printf("enter operation (cube=>c , square=>s , exit=>e): ");
    scanf(" %c", &operation);
    switch(operation) {
        case 'c':
            printf("%d",num*num*num);
            break;
        case 's':
            printf("%d",num*num);
            break;
        case 'e':
            printf("exiting");
            exit(0);
    }
}
