#include<stdio.h>
void statOfStr(char str[])
{
	int Bigstr = 0;
	int Smallstr = 0;
	int Numstr = 0;
	int Spacestr = 0;
	int Otherstr = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			Bigstr++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			Smallstr++;
		else if (str[i] >= '0' && str[i] <= '9')
			Numstr++;
		else if (str[i] == ' ')
			Spacestr++;
		else
			Otherstr++;
	}
	printf("大写字母个数:%d\n", Bigstr);
	printf("小写字母个数:%d\n", Smallstr);
	printf("数字个数:%d\n", Numstr);
	printf("空格个数:%d\n", Spacestr);
	printf("其他字符个数:%d\n", Otherstr);
}
int main()
{  
	char str[100];
	printf("请输入一段字符串:");
	fgets(str, sizeof(str), stdin);
	statOfStr(str);
	return 0;
}