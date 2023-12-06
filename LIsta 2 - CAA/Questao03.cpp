#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target) {
    static int result[2];
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int* result1 = twoSum(nums1, sizeof(nums1) / sizeof(nums1[0]), target1);
    printf("Solucao Simples: [%d, %d]\n", result1[0], result1[1]);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int* result2 = twoSum(nums2, sizeof(nums2) / sizeof(nums2[0]), target2);
    printf("Solucao Simples: [%d, %d]\n", result2[0], result2[1]);

    return 0;
}

