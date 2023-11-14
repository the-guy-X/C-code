#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 6
int main()
{
	int x, i, j, t, flag;
	int ch[N];
	for (x = 0; x < N; x++)
	{
		scanf("%d", &ch[x]);
	}
	for (i = 1; i < N; i++)
	{
		flag = 1;
		for (j = 0; j < N - i; j++)
		{
			if (ch[j] > ch[j + 1])
			{
				flag = 0;
				t = ch[j];
				ch[j] = ch[j + 1];
				ch[j + 1] = t;
			}
		}
		if (flag)
			break;
	}
	for (j = 0; j < N; j++)
	{
		printf("%d ", ch[j]);
	}
	return 0;
}