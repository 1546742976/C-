#include<stdio.h>

int isprime(int x)
{
	for (int i = 2; i < x; i++)
	{
		if(x % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int sum = 0;
	int temp[100] = {};
	for (int i = 100; i <= 200; i++)
	{
			if (isprime(i))
		{
			temp[sum] = i;
			sum ++;
		}
	}
	for(int i=0;i<sum;i++)
	{
		if (i % 8 == 0&&i>0)
		{
			printf("\n");
		}
		printf("%d\t ", temp[i]);
		
	}
	return 0;
}