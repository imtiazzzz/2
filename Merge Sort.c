#include<stdio.h>
void MergeSort(int a[], int l, int r)
{
 if (l < r)
 {
 int mid = (l +r) / 2;
 printf("mid: %d\n", mid);
 printf("Left: %d\n", l);
 printf("Right: %d\n",r);
 MergeSort(a, l, mid);
 MergeSort(a, mid + 1, r);
 }
}
int main()
{
 int n;
 printf("Enter array size: ");
 scanf("%d", &n);
 int a[n];
 printf("Enter the elements of array: ");
 for (int i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 }
 MergeSort(a, 0, n - 1);
}

