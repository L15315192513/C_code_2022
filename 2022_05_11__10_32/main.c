/****************************************************************************
*
*�ļ���  :  ��������֮������ݽ���
*��������: 1�������������ͱ�����ֵ��������ֵ�����ݽ��н���
*����    : ������
*����	 : 2022/05/09
*
****************************************************************************/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/****************************************************************************
* ������: main()
* �� ��: ������
* �� ��: ��
* �� ��: ��
****************************************************************************/
int main()
{
	int i = 100, n = 50, j = 0;	/*��������������������ֵ*/

	printf("��ʼֵ��i = %d,n = %d\n\n", i, n);	/*��ӡ��ʼֵ*/

	j = i;	/*���� j ��Ϊ�м�������������ݽ���*/
	i = n;
	n = j;

	printf("ת����i = %d,n = %d\n", i,n);	/*��ӡת�����ֵ*/

	return 0;	/*����0*/
}