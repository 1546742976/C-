#include<stdio.h>
int fib_rec(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib_rec(n - 1) + fib_rec(n - 2);
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", fib_rec(n));
	return 0;
}