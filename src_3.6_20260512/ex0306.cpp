#include<stdio.h>
void sort2(int a[], int n)
{
	int maxtemp;
	int maxnum;
	for (int i = 0; i < n - 1; i++)
	{
		maxtemp = a[0];
		maxnum = 0;
		for (int j = 0; j < n - i; j++)
		{
			if (maxtemp < a[j])
			{
				maxnum = j;
				maxtemp = a[j];
			}
		}
		a[maxnum] = a[n - 1 - i];
		a[n - 1 - i] = maxtemp;
	}
}
int main()
{
	int a[5] = {1,2,3,4,5};
	int n = 5;
	printf("输入5个整数：");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	sort2(a, n);
	printf("排序过后的数组为：");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}