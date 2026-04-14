#include<stdio.h>
#include<math.h>
int fib(int n)
{
	double m=sqrt(5);
	return (pow((1+m)/2,n)-pow((1-m)/2,n))/m;
}
int main()
{
	int n;
	scanf_s("%d",&n);
	printf("%d\n",fib(n));
	return 0;
}