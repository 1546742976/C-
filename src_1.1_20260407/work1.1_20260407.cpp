#include<stdio.h>

int main()
{
	int n = 0;
	int res = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < 3; i++)
	{
		res += (n % 10);
		n = n / 10;
	}
	printf("%d", res);
	return 0;
}