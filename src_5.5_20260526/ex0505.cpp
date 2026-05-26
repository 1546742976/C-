#include<stdio.h>
#define SQUARE(x) ((x)*(x))
int main()
{
	int x;
	printf("输入一个整数: ");
	scanf_s("%d", &x);
	printf("该整数的平方是: %d\n", SQUARE(x));
	return 0;
}