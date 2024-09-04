#include <stdio.h>

int main() {
    int arr[] = {5, 7, 2, 10, 50}, max = arr[0], min = arr[0], i;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    for (i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Max number: %d\nMin number: %d", max, min);

    return 0;
}