#include<stdio.h>

int main()
{
	char a[4];
	scanf_s("%s", a, 4);
	for (int i = 0; i < 3; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z' )
		{
			a[i] = a[i] + 32;
		}
		printf_s("%c ", a[i]);
	}
	return 0;
}