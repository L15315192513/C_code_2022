/*
* ����˷��ھ���
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	for (i = 1; i <= 9; i++)	/*i �������������*/
	{
		for (j = 1; j <= i; j++)	/*j ����ÿ������ĸ���������i*/
		{
			printf("%d*%d=%d\t", j, i, i * j);	/*�����ʽ*/
		}
		putchar('\n');	/*�س����У�ʹ�����������*/
		putchar('\n');
	}

	return 0;
}