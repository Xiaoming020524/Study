#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int my_function(unsigned int i)
//{
//	int count = 0;
//	while (i)
//	{
//		if (i % 2 == 1)
//		{
//			count++;
//		}
//		i = i / 2;
//	}
//	return count;
//}

//int my_function1(int i)
//{
//	int count = 0;
//	int n = 0;
//	for (n = 0; n < 32; n++)
//	{
//		if (((i >> n) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int my_function2(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		i = i & (i - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("请输入一个数：");
//	scanf("%d", &i);
//	//count = my_function(i);
//	//count = my_function1(i);
//	count = my_function2(i);
//
//	printf("\n%d的二进制中1的个数为%d",i, count);
//	return 0;
//}

//int my_function(int i, int j)
//{
//	int n = 0;
//	int count=0;
//	n = i ^ j;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 1999;
//	int j = 2299;
//	int count = my_function(i, j);
//	printf("count=%d\n", count);
//	return 0;
//}

void my_function(int a)
{
	int n = 0;
	printf("偶数位：");
	for (n = 31; n >= 0; n--)
	{
		if (((32 - n) % 2) == 0)
		{
			printf("%d", ((a >> n) & 1));
		}
	}
	printf("\n");
	printf("奇数位：");
	for (n = 31; n >= 0; n--)
	{
		if (((32 - n) % 2) == 1)
		{
			printf("%d", ((a >> n) & 1));
		}
	}
}

int main()
{
	int i = 0;
	printf("%请输入一个整数：");
	scanf("%d", &i);
	my_function(i);
	return 0;
}