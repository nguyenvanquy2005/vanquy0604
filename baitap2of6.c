#include <stdio.h>

void checkFibonacci(int n, int value1, int value2) {
  printf("%d ", value1);
  if (n == 1) {
    return;  
  }

  printf("%d ", value2);
  if (n == 2) {
    return;  
  }

  for (int i = 3; i <= n; ++i) {
    int ketqua = value1 + value2;
    printf("%d ", ketqua);
    value1 = value2;
    value2 = ketqua;
  }
}

int main() {
  int n;

  printf("Input: ");
  scanf("%d", &n);

  printf("Output: ");
  checkFibonacci(n, 0, 1);  
  printf("\n");

  return 0;
}
