#include<stdio.h>
int main()
{
 float a[1000], sum=0, avg;
 int i, n;
 printf("Enter: ");
 scanf("%d", &n);
 printf("Enter numbers:\n");
 for(i=0; i< n; i++)
 {
 printf("a[%d]: ", i);
 scanf("%f", &a[i]);
 }
 for(i=0; i< n; i++)
 {
 sum = sum + a[i];
 }
 avg = sum/n;
 printf("Sum is %.2f\n", sum);
 printf("Average is %.2f", avg);
 return 0;
}

