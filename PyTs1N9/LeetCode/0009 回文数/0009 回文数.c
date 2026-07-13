#include <stdbool.h>
#include <stdio.h>
bool isPalindrome(int x) {
    if (x < 0) return false;
    long x1 = x, y = 0L;
    while (x1) {
        y = y * 10 + x1 % 10;
        x1 /= 10;
    }
    return x == y;
}

int main() {
    bool Palindrome = isPalindrome(12521);
    printf("%d", Palindrome);
    return 0;
}
