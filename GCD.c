#include <stdio.h>
int hcf(int int1, int int2);
int main() {
 int int1, int2;
 printf("Enter two positive integers: ");
 scanf("%d %d", &int1, &int2);
 printf("G.C.D of %d and %d is: %d.", int1, int2, hcf(int1, int2));
 return 0;
}
int hcf(int int1, int int2)
{
 if (int2 != 0)
 return hcf(int2, int1 % int2);
 else
 return int1;
}
