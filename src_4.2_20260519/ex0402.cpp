#include<stdio.h>
#define ROW 5
#define COL ROW
int sumUp3(int a[ROW][COL])
{
	int sum = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = i; j < COL; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}
int main()
{
	int a[ROW][COL] = {};
	printf("请输入一个5x5的二维数组:\n");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	int sum=sumUp3(a);
	printf("数组上三角元素的和为:%d", sum);
	return 0;
}