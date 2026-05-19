#include<stdio.h>
#define ROW 5
#define COL ROW
void count2D(int a[ROW][COL])
{
	int evencount = 0;
	int max2D = a[0][0];
	int min2D = a[0][0];
	int sum = 0;
	int ava = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (a[i][j] % 2 == 0)
				evencount++;
			if (a[i][j] > max2D)
				max2D = a[i][j];
			if (a[i][j] < min2D)
				min2D = a[i][j];
			sum += a[i][j];
		}
	}
	ava = sum / (ROW * COL);
	printf("偶数个数为:%d\n", evencount);
	printf("最大值为:%d\n", max2D);
	printf("最小值为:%d\n", min2D);
	printf("平均值为:%d\n", ava);
}
int main()
{
	int a[ROW][COL] = {};
	printf("输入一个5x5的二维数组:");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	count2D(a);
	return 0;
}