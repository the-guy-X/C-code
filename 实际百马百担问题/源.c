#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double all;
	int x = 1, y = 1, z = 2;
	for (; x < 33; x++)
	{
		for (y = 1; y <= 48; y++)
		{
			z = 100 - x - y;
			if (z % 2)
				continue;//������һ�������������Ч�� 
			all = 3 * x + 2 * y + 0.5 * z;
			if (all == 100)
				printf("���������Ϊ%d�����������Ϊ%d��С�������Ϊ%d\n", x, y, z);
		}
	}
	return 0;
}
