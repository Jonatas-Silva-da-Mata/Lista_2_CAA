int search(int* nums, int n, int target) {
  int l = 0;
  int r = n - 1;

  while (l <= r) {
    int m = (l + r) / 2;

    if (nums[m] == target) {
      return m;
    } else if (nums[m] < target) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }

  return l;
}

int main() {
  int nums[] = {1, 3, 5, 6};
  int n = sizeof(nums) / sizeof(nums[0]);
  int target = 5;
  int index = search(nums, n, target);
  printf("O índice do alvo é: %d\n", index);
  return 0;
}

