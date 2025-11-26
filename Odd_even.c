#include <stdio.h>
int main() {
    int arr[5] ={10,23,14,7,8};
    int even=0,odd=0;
    for(int i=0;i<5;i++) {
        if(arr[i]%2==0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("even = %d", even);
    printf("\n");
    printf("odd = %d", odd);
}
