#include <stdio.h>

int max_palindrome_size(char* S, int n) {
  int** P = (int**)malloc(sizeof(int*) * n);
  for (int i = 0; i < n; i++) {
    P[i] = (int*)malloc(sizeof(int) * n);
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (S[i - 1] == S[n - j]) {
        P[i][j] = P[i - 1][j - 1] + 2;
      } else {
        P[i][j] = 0;
      }
    }
  }

  int max_size = 0;
  int max_i = 0;
  int max_j = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (P[i][j] > max_size) {
        max_size = P[i][j];
        max_i = i;
        max_j = j;
      }
    }
  }

  free(P);

  return max_size;
}

int main() {
  char* S = "ACGT GT CAAAAT CG";
  int n = strlen(S);
  int max_size = max_palindrome_size(S, n);
  printf("O tamanho da subsequência palíndroma de tamanho máximo é: %d\n", max_size);
  return 0;
}

