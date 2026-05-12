#include<stdio.h>
int search2(int a[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}
int main()
{
	int a[10], i, x;
	printf("输入10个整数: ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	printf("输入要查找的整数: ");
	scanf_s("%d", &x);
	int index = search2(a, 10, x);
	if (index != -1)
		printf("整数%d在数组中的下标为: %d\n", x, index);
	else
		printf("整数%d不在数组中\n", x);
	return 0;
}