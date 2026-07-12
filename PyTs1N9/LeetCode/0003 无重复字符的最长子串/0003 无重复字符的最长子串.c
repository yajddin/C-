#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool contains(char arr[], int size, char value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

int lengthOfLongestSubstring(char *s) {
    int max_len = 0;
    int size = strlen(s);

    for (int i = 0; i < size; i++) {
        char arr[size];
        int arr_size = 0;

        for (int j = i; j < size; j++) {
            if (contains(arr, arr_size, s[j])) {
                break;
            }
            arr[arr_size] = s[j];
            arr_size++;

            if (arr_size > max_len) {
                max_len = arr_size;
            }
        }
    }
    return max_len;
}

int main() {
    printf("%d\n", lengthOfLongestSubstring("abcabcbb"));
    printf("%d\n", lengthOfLongestSubstring("pwwkew"));
    return 0;
}
