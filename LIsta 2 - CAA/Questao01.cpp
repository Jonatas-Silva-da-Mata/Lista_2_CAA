#include <stdio.h>

int partition(int *S, int p, int r, int piv) {
  int i = p - 1;
  int j = r;
  while (1) {
    while (S[++i] < piv);
    while (S[--j] > piv);
    if (i >= j) {
      return j;
    }
    int aux = S[i];
    S[i] = S[j];
    S[j] = aux;
  }
}

int* three_way_partition(int *S, int p, int r, int piv) {
  int q1 = partition(S, p, r, piv);
  int q2 = partition(S, q1 + 1, r, piv);
  return (int[]) {q1, q2};
}

int main() {
  int S[] = {1, 2, 3, 3, 3, 5, 6, 7, 8, 9};
  int p = 0, r = 9;
  int piv = 3;
  int *res = three_way_partition(S, p, r, piv);
  printf("q1: %d\n", res[0]);
  printf("q2: %d\n", res[1]);
  for (int i = 0; i <= r; i++) {
    printf("%d ", S[i]);
  }
  printf("\n");
  return 0;
}
