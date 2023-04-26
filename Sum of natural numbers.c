#include <stdio.h>
int addN(int n);
int main() {
 int num;
 printf("Enter a positive integer: ");
 scanf("%d", &num);
 printf("Sum = %d", addN(num));
}
int addN(int n) {
 if (n != 0)
 return n + addN(n - 1);
 else
 return n;
}
