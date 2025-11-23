#include <stdio.h>
int main() {
    int num1, num2;
    char operation;
    printf("enter number 1: ");
    scanf("%d", &num1);
    printf("enter number 2: ");
    scanf("%d", &num2);
    printf("enter operator (+, -, *,/): ");
    scanf(" %c", &operation);
    switch(operation) {
        case '+': 
        printf("%d",num1+num2); 
        break;
        case '-': 
        printf("%d",num1-num2); 
        break;
        case '*': 
        printf("%d",num1*num2); 
        break;
        case '/': 
        printf("%d",num1/num2); 
        break;
        default: 
        printf("Please enter a propper input ");
    }
}
