#include<stdio.h>
void sort1(int a[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
}
int main()
{
	int a[5] = {};
	int n = 5;
	printf("请输入5个整数：");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	sort1(a, n);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}