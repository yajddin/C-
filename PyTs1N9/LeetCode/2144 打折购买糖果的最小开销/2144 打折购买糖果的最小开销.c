#include <stdio.h>
#include <stdlib.h>
// 负数：a 排在 b 前面
// 0：   a 和 b 相等，顺序无所谓
// 正数：a 排在 b 后面
int func_sort(const void *a, const void *b) {
    int x = *(const int *) a;
    int y = *(const int *) b;
    return y - x;
}

int minimumCost(int* cost, int costSize) {
    // 负数：第一个排前面; 0：相等; 正数：第一个排后面
    qsort(cost, costSize, sizeof(cost[0]), func_sort);
    int sum = 0;
    for (int i = 0; i < costSize; i++) {
        if (i%3 != 2) {
            sum += cost[i];
        }
    }
    return sum;
}

int main() {
    int cost[] = {6, 5, 7, 9, 2, 2};
    int costSize = sizeof(cost)/sizeof(cost[0]);
    int result = minimumCost(cost,costSize);
    printf("%d",result);
    return 0;
}
