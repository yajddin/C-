// 先统计text每个字母出现的次数，然后每种字母最多能支持几个balloon
#include  <stdio.h>

int min(int x, int y) {
    return x < y ? x : y;
}

int maxNumberOfBalloons(char *text) {
    int count[26] = {0};

    for (int i = 0; text[i] != '\0'; i++) {
        count[text[i] - 'a']++;
    }

    int b = count['b' - 'a'];
    int a = count['a' - 'a'];
    int l = count['l' - 'a'] / 2;
    int o = count['o' - 'a'] / 2;
    int n = count['n' - 'a'];

    return min(min(min(min(b, a), l), o), n);
}


int main() {
    printf("%d\n", maxNumberOfBalloons("nlaebolko"));
    printf("%d\n", maxNumberOfBalloons("loonbalxballpoon"));
    printf("%d\n", maxNumberOfBalloons("leetcode"));
    return 0;
}
