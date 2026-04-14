#include<stdio.h>
void stat(int a[], int n)
{
	int totalSum = 0;
	int sum = 0;
	int Maxnum = a[0];
	int Minnum = a[0];
	for(int i = 0; i < n; i++)
	{
		totalSum += a[i];
		if (a[i] % 2 == 0)
			sum ++;
		if (a[i] > Maxnum)
			Maxnum = a[i];
		if (a[i] < Minnum)
			Minnum = a[i];
	}
	double avg = (double)totalSum / n;
	printf("偶数个数：%d\n", sum);
	printf("最大值：%d\n", Maxnum);
	printf("最小值：%d\n", Minnum);
	printf("平均值：%f\n", avg);
}
int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	stat(a, 5);
	return 0;
}