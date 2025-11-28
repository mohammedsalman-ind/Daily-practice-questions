#include <stdio.h>
int main() {
    int arr[4] = {1, 2, 3, 4};
    int temp[4];
    int j = 0;

    for (int i = 3; i >= 0; i--) { // Start from the last valid index (3)
        temp[j] = arr[i];          // Assign elements in reverse order
        j++;
    }

    printf("%d", temp[0]); // Print the first element of the reversed array
    return 0;
}
