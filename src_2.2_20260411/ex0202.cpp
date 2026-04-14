#include<stdio.h>
int isprime(int x)
{
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		if (isprime(i) && isprime(n - i))
		{
			printf("%d = %d + %d\n", n, i, n - i);
		}
	}
	return 0;
}