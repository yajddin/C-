#include <stdio.h>
int main() {
    int n = 4;
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 1; i <= 2 * n - 1; i += 2) {
        sumOdd += i;
    }
    for (int i = 2; i <= 2 * n; i += 2) {
        sumEven += i;
    }

    int gcb = sumEven - sumOdd;
    printf("%d", gcb);
}
