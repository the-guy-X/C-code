#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int o = 0, j, k, flag, i, m;//j�ǽ��н����ĵڼ��֣�flag���������� Ϊ��������Ѿ�����������µ�����Ч��
	int ch[1000] = { 0 };
	do
	{
		scanf("%d", &ch[o]);
		o++;
	} while ((getchar()) != '\n');//����do while ��Ϊ�˷�ֹ��һ���ַ�����û����for��whileѭ�����ʱ�����ñ�ķ�������
	printf("��һ��������%d������\n", o);
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
	printf("��С���������Ϊ:");
	for (i = 0; i < o; i++)
	{
		printf("%d ", ch[i]);
	}
	printf("\n");
	return 0;
}