#include<stdio.h>
void strCopy(char str2[], char str1[])
{
	int i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
}
int main()
{
	char str1[100], str2[100];
	printf("输入一个字符串: ");
	fgets(str1, sizeof(str1), stdin);
	strCopy(str2, str1);
	printf("复制后的字符串: %s", str2);
	return 0;
}