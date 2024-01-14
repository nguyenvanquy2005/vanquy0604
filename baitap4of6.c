#include <stdio.h>

void decimalToBinary(int n) {
 int array[32];  
 int i = 0;

 while (n > 0) {
   array[i] = n % 2;  
   n /= 2;             
   i++;
 }

 printf("Output: ");
 for (int j = i - 1; j >= 0; j--) {
   printf("%d", array[j]);  
 }
 printf("\n");
}

int main() {
 int sothapphan;

 printf("Input: ");
 scanf("%d", &sothapphan);

 decimalToBinary(sothapphan);

 return 0;
}
