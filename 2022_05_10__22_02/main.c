/*
* 输出乘法口诀表
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	for (i = 1; i <= 9; i++)	/*i 控制输出的行数*/
	{
		for (j = 1; j <= i; j++)	/*j 控制每行输出的个数，等于i*/
		{
			printf("%d*%d=%d\t", j, i, i * j);	/*输出乘式*/
		}
		putchar('\n');	/*回车换行，使输出更加美观*/
		putchar('\n');
	}

	return 0;
}