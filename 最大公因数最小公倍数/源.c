#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int action1(int x, int y)//action1用于求最大公因数 (辗转相除法——定理：两个整数的最小公倍数等于这两个数中较小的数和两数相除余数的最小公因数）（结束：直到较小的数为零时，另一个数即为最小公因数）
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
int action2(int x, int y)//action2用于求最小公倍数 (两个整数的乘积等于这两个数的最小公倍数和最大公约的乘积）
{
	int t;
	t = x * y / action1(x, y);//调用了求最小公因数
	return t;
}
int main()
{
	int a, b;
	printf("请输入两个数（用空格隔开）:");
	scanf("%d%d", &a, &b);
	printf("最大公因数为%d\n", action1(a, b));
	printf("最小公倍数为%d", action2(a, b));
	return 0;