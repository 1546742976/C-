#include<stdio.h>
void interCross(char s1[], char s2[], char s3[])
{
	int i = 0, j = 0, k = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] != '\0')
		{
			s3[k] = s1[i];
			k++;
			i++;
		}
		if (s2[j] != '\0')
		{
			s3[k] = s2[j];
			k++;
			j++;
		}
	}
	s3[k] = '\0';
	printf("两个字符串的交集为：%s\n", s3);
}
int main()
{
	char s1[100], s2[100], s3[1000];
	printf("请输入第一个字符串：");
	fgets(s1, sizeof(s1), stdin);
	printf("请输入第二个字符串：");
	fgets(s2, sizeof(s2), stdin);
	interCross(s1, s2, s3);
	return 0;
}