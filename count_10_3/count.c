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
		printf("1、加法 2、减法 3、乘法 4、除法 0、退出\n");
		printf("请选择：");
		scanf("%d", &n);
		printf("请输入两个数：");
		scanf("%d%d", &i, &j);
		if (n == 0)
		{
			printf("关闭计算器\n");
			break;
		}
		else if(n == 1)
		{
			int sum=Add(i,j);
			printf("结果为：%d\n", sum);
		}
		else if (n == 2)
		{
			int sum = cut(i, j);
			printf("结果为：%d\n", sum);
		}
		else if (n == 3)
		{
			int sum = ride(i, j);
			printf("结果为：%d\n", sum);
		}
		else if (n == 4)
		{
			int sum = divide(i, j);
			printf("结果为：%d\n", sum);
		}
	}
	return 0;
}