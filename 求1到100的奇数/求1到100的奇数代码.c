#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	printf("����Ҫ�ҳ�1��100֮�������\n������\n");
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
/*        //�޸�һ��
#include <stdio.h>
int main()
{
	int a = 1;//��ΪҪ����1��100֮������� ����Ӧ�ó�ʼ��a=1 ��Ȼд��a=0�������Ľ����һ���� ���ǲ����Ͻ�(д�ɱ����ʽ �п����Ǵ�ģ�
	printf("����Ҫ�ҳ�1��100֮�������\n������\n");
	while (a <= 100)
	{
		if (a%2 == 1)//����Ϊ����д���� ��ʱû�뵽    *Ҳ����д��if(a%2!=0)
		{
			printf("%d ", a);
		}
		a == a++;
	}
	return 0;
}*/