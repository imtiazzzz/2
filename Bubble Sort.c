#include <stdio.h>
int main()
{
 int n;
 printf("Enter The Size of Numbers: ");
 scanf("%d", &n);
 int array[1000];
 printf("Enter The Numbers : ");
 for(int i = 0; i < n; i++)
 {
 scanf("%d", &array[i]);
 }
 for(int i = 0; i < n-1; i++)
 {
 for(int j = 0; j < n-i-1; j++)
 {
 if (array[j] > array[j+1])
 {
 int temp = array[j];
 array[j] = array[j+1];
 array[j+1] = temp;
 }
 }
 }
 printf("The Bubble Sorts : ");
 for(int i = 0; i < n; i++)
 {
 printf(" %d ", array[i]);
 }
}
