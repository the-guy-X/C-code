#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define B 500
int main()
{
	int N, V;
	int v[B] = { 0 }, w[B] = { 0 };//��Ӧ��Ʒ������ͼ�ֵ
	int i, j;
	scanf("%d%d", &N, &V); //N����Ʒ�����������ΪV
	int xy[B][B] = { 0 };//����һ�����Ž��ͼ
	for (i = 1; i <= N; i++)
	{
		scanf("%d%d", &v[i], &w[i]);
	}
	for (i = 1; i <= N; i++)//��N����Ʒ
	{
		for (j = 1; j <= V; j++)//��ǰ���ǵı�������
		{
			if (v[i] > j)//������������ʱ
			{
				xy[i][j] = xy[i - 1][j];
			}
			else//���������㹻ʱ
			{
				xy[i][j] = (xy[i - 1][j] > xy[i - 1][j - v[i]] + w[i]) ? xy[i - 1][j] : xy[i - 1][j - v[i]] + w[i];//��Ŀ�������ϴ�ֵ
			}
		}
	}
	printf("%d", xy[N][V]);//ֱ����N��V��ʾ���һ��Ԫ��
	return 0;
}