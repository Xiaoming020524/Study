#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"Add.h"
#include"cut.h"
#include"ride.h"
#include"divide.h"

int main()
{
	int i, j;
	int n;
	for (n = 0; n < 5;)
	{
		printf("1���ӷ� 2������ 3���˷� 4������ 0���˳�\n");
		printf("��ѡ��");
		scanf("%d", &n);
		printf("��������������");
		scanf("%d%d", &i, &j);
		if (n == 0)
		{
			printf("�رռ�����\n");
			break;
		}
		else if(n == 1)
		{
			int sum=Add(i,j);
			printf("���Ϊ��%d\n", sum);
		}
		else if (n == 2)
		{
			int sum = cut(i, j);
			printf("���Ϊ��%d\n", sum);
		}
		else if (n == 3)
		{
			int sum = ride(i, j);
			printf("���Ϊ��%d\n", sum);
		}
		else if (n == 4)
		{
			int sum = divide(i, j);
			printf("���Ϊ��%d\n", sum);
		}
	}
	return 0;
}