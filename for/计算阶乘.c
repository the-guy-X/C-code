#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	int d = 0;
	int n = 0;
	scanf("%d", &n);
	printf("您输入的n值为%d\n", n);
	for (a = 1; a < n + 1; a++)
	{
		c = 1;
		b = a;
		for (b; b > 0; b--)
		{
			c = c * b;
		}
		d = c + d;
	}
	printf("1!+2!…+n!=%d", d);
	return 0;
}