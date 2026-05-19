#include<stdio.h>
#define ROW 5
#define COL ROW
int sumbroad(int a[ROW][COL])
{
	int sum = 0;
	for (int i = 0; i < ROW; i++)
	{
		sum += a[0][i] + a[i][0] + a[ROW-1][i] + a[i][COL-1];
	}
	return sum;
}
int main()
{
	int a[ROW][COL] = {};
	printf("输入一个5x5的二维数组:\n");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	int sum = sumbroad(a);
	printf("四周数之和:%d", sum);
	return 0;
}