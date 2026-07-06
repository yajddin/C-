#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int *res = malloc(sizeof(int) * 2);
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int len = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize = 0;
    int *result = twoSum(nums,len,target,&returnSize);
    if (result!=NULL) {
        printf("[%d,%d]",result[0],result[1]);
        free(result);
    }else {
        printf("no result");
    }

    return 0;
}
