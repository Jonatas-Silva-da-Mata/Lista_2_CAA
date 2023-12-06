#include <stdio.h>

int* squared_sorted_array(int* nums, int n) {
  int* C = (int*)malloc(sizeof(int) * n);
  int j = 0;
  for (int i = 0; i < n; i++) {
    while (j > 0 && nums[i] * nums[i] > C[j - 1]) {
      j--;
    }
    C[j++] = nums[i] * nums[i];
  }

  return C;
}

int main() {
  int nums[] = {-4, -1, 0, 3, 10};
  int n = sizeof(nums) / sizeof(nums[0]);
  int* C = squared_sorted_array(nums, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");
  return 0;
}

