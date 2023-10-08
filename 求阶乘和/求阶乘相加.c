#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	int n = 0;
	printf("请输入n值:");
	scanf("%d", &n);
	for (a; a <= n; a++)
	{
		b = b * a;
		c = c + b;
	}
	printf("所求结果是%d\n", c);
	return 0;
}