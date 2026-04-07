#include<stdio.h>

int main()
{
	int x = 0 , y = 0;
	printf_s("请输入两个整数：");
	scanf_s("%d %d", &x, &y);
	if (x == 0 || y == 0)
	{
		printf_s("5");
	}
	else
	{
		if (x > 0)
		{
			if (y > 0)
			{
				printf_s("1");
			}
			else
			{
				printf_s("4");
			}
		}
		else 
		{
			if (y > 0)
			{
				printf_s("2");
			}
			else
			{
				printf_s("3");
			}
		}
	}
	return 0;
}