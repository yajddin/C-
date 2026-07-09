#include <stdio.h>

int main() {
    int arr[] = {6, 5, 7, 9, 2, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
