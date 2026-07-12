// C语言运行消耗内存9MB Python语言运行消耗内存19MB 消耗内存差异原因如下：
// C 的 int 数组：
//  1. 一块连续内存，直接存整数
//  2. 原地排序，额外内存很少
// Python 的 list：
//  1. 一块指针数组，每个指针再指向一个 Python int 对象，存的是对象
//  2. 带解释器运行

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

// 如果不用qsort()
// 简单排序算法：
void sortDesc(int* cost, int costSize) {
    for (int i = 0; i < costSize - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < costSize; j++) {
            if (cost[j] > cost[maxIndex]) {
                maxIndex = j;
            }
        }

        int temp = cost[i];
        cost[i] = cost[maxIndex];
        cost[maxIndex] = temp;
    }
}