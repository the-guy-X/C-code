#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	int n = 0;
	printf("������nֵ:");
	scanf("%d", &n);
	for (a; a <= n; a++)
	{
		b = b * a;
		c = c + b;
	}
	printf("��������%d\n", c);
	return 0;
}