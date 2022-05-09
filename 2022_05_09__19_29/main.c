/*
* 程序实现：
* 打印100~200之间的素数
* 
* 素数又称质数，有无限个。质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。
* 例如：5这个数的因数只有1和5，再也找不出其他的因数了，这样的数就叫做素数。
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
/*声明子函数*/
void Version_1(void);
void Version_2(void);
void Version_3(void);

int main()
{
	//Version_1();
	//Version_2();
	Version_3();	/*调用子函数*/

	return 0;
}

/*
* 版本1
* 用100~200之间的每个数字，除以2到其本身前面的那一个数字，
* 如果此过程中出现整除的现象，则该数不是素数。如果没有整除的现象，则该数为素数输出。
*/
void Version_1(void)
{
	int i = 0, j = 0, number = 0;

	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)	/*判断 i 除 j 取余，等于0*/
			{
				break;		/*退出循环*/
			}
		}
		if (i == j)	/*判断 i 是否 等于 j,等于则是素数*/
		{
			number++;	/*用作素数个数的计数*/
			printf("%d.\t", number);/*可注释掉，不影响程序的运行*/

			printf("%d\n", i);	/*输出素数*/
		}
	}
}

/*
* 版本2
* 利用平方根
* 用100~200之间的数除以2到它的开平方根(如果该数的平方根是整数则可以除到)
* 在此之间如果出现整除现象，则该数不是素数；
* 如果没有出现整除现象，则该数是素数
*/
void Version_2(void)
{
	int i = 0, j = 0, number = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)	/*循环的最大次数是 i的平方根*/
		{
			if (i % j == 0)	/*判断 i 除 j 取余，等于0*/
			{
				break;		/*退出循环*/
			}
		}
		if (j > sqrt(i))
		{
			number++;	/*用作素数个数的计数*/
			printf("%d.\t", number);/*可注释掉，不影响程序的运行*/

			printf("%d\n", i);	/*输出素数*/
		}
	}

}

/*
* 版本3
* 是对版本2的优化
* 100到200之间的所有偶数都不是素数，所以可以去除，
* 直接对奇数进行判断，这样可以让程序的运行时间减少一半。
*/
void Version_3(void)
{
	int i = 0, j = 0, number = 0;
	for (i = 101; i <= 200; i += 2)	/*此处 i += 2 等同于 i = i + 2;*/
	{
		for (j = 2; j <= sqrt(i); j++)	/*循环的最大次数是 i的平方根*/
		{
			if (i % j == 0)	/*判断 i 除 j 取余，等于0*/
			{
				break;		/*退出循环*/
			}
		}
		if (j > sqrt(i))
		{
			number++;	/*用作素数个数的计数*/
			printf("%d.\t", number);/*可注释掉，不影响程序的运行*/

			printf("%d\n", i);	/*输出素数*/
		}
	}
}
