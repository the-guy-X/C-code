#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define B 500
int main()
{
	int N, V;
	int v[B] = { 0 }, w[B] = { 0 };//对应商品的体积和价值
	int i, j;
	scanf("%d%d", &N, &V); //N个物品，背包的体积为V
	int xy[B][B] = { 0 };//建立一个最优结果图
	for (i = 1; i <= N; i++)
	{
		scanf("%d%d", &v[i], &w[i]);
	}
	for (i = 1; i <= N; i++)//第N个物品
	{
		for (j = 1; j <= V; j++)//当前考虑的背包容量
		{
			if (v[i] > j)//背包容量不够时
			{
				xy[i][j] = xy[i - 1][j];
			}
			else//背包容量足够时
			{
				xy[i][j] = (xy[i - 1][j] > xy[i - 1][j - v[i]] + w[i]) ? xy[i - 1][j] : xy[i - 1][j - v[i]] + w[i];//三目运算符求较大值
			}
		}
	}
	printf("%d", xy[N][V]);//直接用N，V表示最后一个元素
	return 0;
}