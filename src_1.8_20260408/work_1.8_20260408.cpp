#include<stdio.h>
int main()
{
	int a, b, c;
	int res = 0;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for(int k=0; k < 10; k++)
			{
				res = 100 * i + 10 * j + k;
				a = i * i * i;
				b = j * j * j;
				c = k * k * k;
				if (res == (a + b + c))
				{
					printf_s("%d\n", res);
				}
			}
		}
	}
	return 0;
}