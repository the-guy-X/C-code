#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int o = 0, j, k, flag, i, m;//j是进行交换的第几轮，flag是起标记作用 为了提高在已经是正序情况下的运行效率
	int ch[1000] = { 0 };
	do
	{
		scanf("%d", &ch[o]);
		o++;
	} while ((getchar()) != '\n');//运用do while 是为了防止第一个字符被吞没，用for、while循环语句时可以用别的方法避免
	printf("您一共输入了%d个数字\n", o);
	for (j = 1; j < o; j++)
	{
		flag = 1;
		for (k = 0; k < o - j; k++)
		{
			if (ch[k] > ch[k + 1])
			{
				flag = 0;
				m = ch[k];
				ch[k] = ch[k + 1];
				ch[k + 1] = m;
			}
		}
		if (flag)
			break;
	}
	printf("由小到大排序后为:");
	for (i = 0; i < o; i++)
	{
		printf("%d ", ch[i]);
	}
	printf("\n");
	return 0;
}