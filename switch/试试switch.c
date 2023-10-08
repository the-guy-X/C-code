#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);//这儿不能写成scanf（"%d\n,day"）;    输入函数中不能有换行符
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("请输入1-10之间的数字.");
	}
	return 0;
}