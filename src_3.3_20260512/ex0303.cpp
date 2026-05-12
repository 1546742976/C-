#include<stdio.h>
int search1(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}
int main()
{
	int a[5] = {};
	printf("请输入 5 个整数：");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &a[i]);
	int n = sizeof(a) / sizeof(a[0]);
	int x;
	printf("请输入要查找的整数：");
	scanf_s("%d", &x);
	int index = search1(a, n, x);
	if (index != -1)
		printf("元素 %d 是数组的第 %d 项\n", x, index+1);
	else
		printf("元素 %d 不在这个数组中\n", x);
	return 0;
}