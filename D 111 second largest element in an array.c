#include <stdio.h>

int main() {
    int arr[6] = {10, 45, 32, 67, 21, 50};
    int largest, second;

    largest = second = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest = %d", second);
    return 0;
}
