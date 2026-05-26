#include<stdio.h>
int fib2(int* a, int n)
{
	a[0] = 1;
	a[1] = 1;
	int* p;
	int* q;
	int count = 0;
	if (n == 1)
	{
		count = 1;
	}
	else if (n == 2)
	{
		count = 2;
	}
	else
	{
		count = 2;
		for (int i = 2; i < n; i++)
		{
			p = &a[i - 2];
			q = &a[i - 1];
			a[i] = *p + *q;
			count += a[i];
		}
	}

	return count;
}
int main()
{
	int a[1000] = {};
	int n;
	printf("输入一个数字:");
	scanf_s("%d", &n);
	int count = fib2(a, n);
	printf("前%d项的和为:%d", n, count);
	return 0;
}