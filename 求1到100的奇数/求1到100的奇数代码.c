#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	printf("您想要找出1到100之间的奇数\n其结果是\n");
	while (a<=100) 
	{		n = a % 2;
		if (n == 1) 
		{
			printf("%d ", a);
		}
		a == a++;
	}
	return 0;
}
/*        //修改一下
#include <stdio.h>
int main()
{
	int a = 1;//因为要的是1到100之间的奇数 所以应该初始化a=1 虽然写成a=0跑起来的结果是一样的 但是不够严谨(写成别的形式 有可能是错的）
	printf("您想要找出1到100之间的奇数\n其结果是\n");
	while (a <= 100)
	{
		if (a%2 == 1)//我认为这样写更简单 当时没想到    *也可以写成if(a%2!=0)
		{
			printf("%d ", a);
		}
		a == a++;
	}
	return 0;
}*/