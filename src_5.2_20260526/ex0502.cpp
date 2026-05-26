#include<stdio.h>
int deleteElement(int *a, int n, int x)
{
	int i, j;
	i = 0;
	while (i < n)
	{
		if (a[i] != x)
		{
			i++;
			continue;
		}
		for (j = i; j < n - 1; j++)
		{
			a[j] = a[j + 1];
		}
		n -= 1;
		i++;
	}
	return n;
}
int main()
{
	int a[100], n, x, i;
	printf("输入数组元素个数: ");
	scanf_s("%d", &n);
	printf("输入数组元素: ");
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("输入要删除的元素: ");
	scanf_s("%d", &x);
	n = deleteElement(a, n, x);
	printf("删除元素%d后的数组:\n", x);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}