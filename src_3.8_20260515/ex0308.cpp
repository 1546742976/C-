#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a[10000] = {};
	srand(time(NULL));
	for (int i = 0; i < 10000; i++) {
		a[i] = rand() % 10 + 1;
	}
	int smallcount = 0, bigcount = 0;
	int n;
	printf("请输入要统计的数字个数（不超过10000）：");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		if (a[i] < 6) {
			smallcount++;
		}
		else if (a[i] > 5) {
			bigcount++;
		}
	}
	printf("1-5的数有%d个\n", smallcount);
	printf("6-10的数有%d个\n", bigcount);
	double smallpercent = (double)smallcount / n * 100;
	double bigpercent = (double)bigcount / n * 100;
	printf("1-5的数占%.2f%%\n", smallpercent);
	printf("6-10的数占%.2f%%\n", bigpercent);
	return 0;
}