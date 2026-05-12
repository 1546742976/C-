#include<stdio.h>
void inv(int a[], int n)
{
	int i = 0, j = n - 1;
	while (i < j)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	int a[10];
	printf("输入10个整数：\n");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	inv(a, 10);
	printf("输出的数组为:");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}