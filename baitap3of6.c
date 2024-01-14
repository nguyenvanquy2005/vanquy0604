#include <stdio.h>

void printReverse(int array[], int n) {
  for (int i = n - 1; i >= 0; --i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int n;

  printf("Input: ");
  scanf("%d", &n);

  int array[n];
 
  for (int i = 0; i < n; ++i) {
    scanf("%d", &array[i]);
  }

  printf("Output: ");
  printReverse(array, n);

  return 0;
}
