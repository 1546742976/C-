#include<stdio.h>
int pla(char* str)
{
	int n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	char* p = &str[0];
	char* q = &str[n - 2];
	while (p < q)
	{
		if (*p == *q)
		{
			p++;
			q--;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char str[100];
	printf("请输入一个字符串：");
fgets(str, sizeof(str), stdin);
	if (pla(str))
	{
		printf("该字符串是回文。\n");
	}
	else
	{
		printf("该字符串不是回文。\n");
	}
	return 0;
}