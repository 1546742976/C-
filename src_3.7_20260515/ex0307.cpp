#include<stdio.h>
void sort3(int a[], int n)
{
    int temp;
    int j;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            temp = a[i];
            for (j = i - 1; j >= 0 && temp < a[j]; j--)
            {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;

        }
    }
}
int main()
{
    int a[5] = {};
    int n = 5;
	printf("请输入5个整数：");
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
	}
    sort3(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}