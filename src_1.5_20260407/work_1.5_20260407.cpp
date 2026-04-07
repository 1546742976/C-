#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int res = 0;
	int temp = 1;
	for (int i = 1; i <= n; i++)
	{
		temp *= i;
		res += temp;
	}
	printf_s("%d", res);
	return 0;
}