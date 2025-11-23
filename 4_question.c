#include <stdio.h>
int main() {
    int p = 2, q = 6;
    int result;
    result = ++p + q-- - --p + q++;
    printf("result = %d", result);
    printf("\n");
    printf("final value of p = %d", p);
    printf("\n");
    printf("final value of q = %d", q);
}
