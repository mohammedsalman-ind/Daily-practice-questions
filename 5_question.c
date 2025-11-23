#include <stdio.h>
int main() {
    int x = 7, y = 2;
    int result;

    result = x++ + --y + y--;

    printf("result = %d \n", result);
    printf("final value of x = %d \n", x);
    printf("final value of y = %d \n", y);
}
