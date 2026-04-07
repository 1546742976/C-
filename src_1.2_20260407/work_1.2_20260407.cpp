#include<stdio.h>
#include<math.h>

int main()
{
	int a = 0, b = 0, c = 0;
	double x1 = 0, x2 = 0;
	printf("请输入三个整数：");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 0)
	{
		x1 = x2 = -c / b;
		printf("方程的解为：%f\n", x1);
	}
	else
	{
		int delta = b * b - 4 * a * c;
		if (delta < 0)
		{
			printf("方程无实数解\n");
		}
		else if (delta == 0)
		{
			x1 = x2 = -b / (2 * a);
			printf("方程的解为：%f\n", x1);
		}
		else
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("方程的解为：%f 和 %f\n", x1, x2);
		}
	}
	return 0;
}