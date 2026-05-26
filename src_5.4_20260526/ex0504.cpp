#include<stdio.h>
int NumOfWords(char* str)
{
	int count = 0;
	while (*str)
	{
		if (*str == ' ')
			count++;
		str++;
	}
	return count + 1;
}
int main()
{
	char str[100];
	printf("输入一段字符: ");
	fgets(str, sizeof(str), stdin);
	int wordCount = NumOfWords(str);
	printf("单词数量: %d\n", wordCount);
	return 0;
}