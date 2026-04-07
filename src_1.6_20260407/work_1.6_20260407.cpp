#include<stdio.h>
int main()
{
	int n = 0;
	double res = 1;
	scanf_s("%d", &n);
	double temp = 0;
	for (int i = 1; i <= n; i++)
	{
		temp = (double)(2 * i * 2 * i) / ((2 * i - 1) * (2 * i + 1));
		res *= temp;
	}
	printf_s("½üËÆÖµÎª£º%f", res);
	return 0;
}