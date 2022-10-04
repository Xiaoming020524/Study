#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//print(int n)
//{
//	if (n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	int i = 0;
//	printf("请任意输入一个数：");
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}

//int Arr1(int n)
//{
//	int sum = 0;
//	if (n <= 2)
//		return 1;
//	else
//		sum = Arr(n - 1) + Arr(n - 2);
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("请输入：");
//	scanf("%d", &n);
//	m=Arr1(n);
//	printf("斐波那契数列第%d位的数为：%d\n",n,m);
//	return 0;
//}

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	int ride;
//	if (n > 1)
//		ride = n*Fac2(n-1);
//	else if(n<=1)
//		ride=1;
//		return ride;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	//ret=Fac1(n);
//	ret = Fac2(n);
//	printf("%d!=%d\n", n,ret);
//	return 0;
//}