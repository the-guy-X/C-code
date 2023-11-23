#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double i, ret=1, sum = 0;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum += ret;
	}
	printf("%.0f", sum);
	return 0;
}

