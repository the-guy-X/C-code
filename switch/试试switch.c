#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);//�������д��scanf��"%d\n,day"��;    ���뺯���в����л��з�
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("������1-10֮�������.");
	}
	return 0;
}