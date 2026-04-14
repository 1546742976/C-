#include<stdio.h>
void pr_rev(int x)
{
	int temp = 0;
	temp = x % 10;
	printf("%d", temp);
	if (x / 10 != 0)
		pr_rev(x / 10);
}
int main()
{
	int n;
	scanf_s("%d", &n);
	pr_rev(n);
	return 0;
}