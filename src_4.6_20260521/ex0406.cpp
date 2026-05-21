#include<stdio.h>
#include<string.h>
int CountOfSubstr(char str[], char substr[])
{
	int i = 0,j=0;
	int count = 0;
	int len = strlen(substr)-1;
	int temp = 0;
	while (str[i] != '\0')
	{
		temp = i;
		while(str[i]== substr[j] && substr[j] != '\n')
		{
			if (str[i] == '\n')
				break;
			i++;
			j++;
		}
		if (j == len)
			count++;
		if (temp != i)
			i = temp+1;
		else
			i++;
		j = 0;
	}
	return count;
}
int main()
{
	char str[100], substr[100];
	printf("输入主字符串: ");
	fgets(str, sizeof(str), stdin);
	printf("输入子字符串: ");
	fgets(substr, sizeof(substr), stdin);
	int count = CountOfSubstr(str, substr);
	printf("子字符串在主字符串中出现了 %d 次。\n", count);
	return 0;
}