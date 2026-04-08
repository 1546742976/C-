#include<stdio.h>
int main()
{
	int m = 0, n = 0;
	scanf_s("%d%d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		printf_s("*");
	}
	printf_s("\n");
	for (int i = 1; i < (m-1); i++)
	{
		printf_s("*");
		for(int j= 1; j < (n-1); j++)
		{
			printf_s(" ");
		}
		printf_s("*\n");
	}
	for (int i = 0; i < n; i++)
	{
		printf_s("*");
	}
	printf_s("\n");

	return 0;
}