#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int action1(int x, int y)//action1������������� (շת�������������������������С�������������������н�С���������������������С����������������ֱ����С����Ϊ��ʱ����һ������Ϊ��С��������
{
	while (y != 0)
	{
		int t;
		t = x % y;
		x = y;
		y = t;
	}
	return x;
}
int action2(int x, int y)//action2��������С������ (���������ĳ˻�����������������С�����������Լ�ĳ˻���
{
	int t;
	t = x * y / action1(x, y);//����������С������
	return t;
}
int main()
{
	int a, b;
	printf("���������������ÿո������:");
	scanf("%d%d", &a, &b);
	printf("�������Ϊ%d\n", action1(a, b));
	printf("��С������Ϊ%d", action2(a, b));
	return 0;