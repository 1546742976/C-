#include<stdio.h>
int gcd(int x, int y)
{
	//数学定义法
	/*
	int temp;
	if (x < y)
	{
		temp = x;
	}
	else
	{
		temp = y;
	}
	for (int i=temp; i > 0 ; i--)
	{
		if (x % i == 0 && y % i == 0)
			return i;
	}
	*/
	//辗转相除法
	/*
	int r;
	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	return x;
	*/
	//辗转相减法
	if (x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	while (y != 0)
	{
		x = x - y;
		if (x < y)
		{
			int temp = x;
			x = y;
			y = temp;
		}
	}
	return x;
}
int main()
{
	int m, n;
	printf("请输入两个整数：");
	scanf_s("%d %d", &m, &n);
	printf("最大公约数是：%d\n", gcd(m, n));
	return 0;
}