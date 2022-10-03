#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void part(int n)
//{
//	if (n > 9)
//	{
//		part(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 1234;
//	part(num);
//	return 0;
//}

//#include<string.h>
//#include<math.h>
//
//int is_prime(int n)
//{
//	int a;
//	for (a = 2; a <n; a++)
//	{
//		if (n % a == 0)
//		{
//			return 0;
//		}
//	}
//	if (a == n)
//		return 1;
//}
//
//int main()
//{
//	int i = 0,j=0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			j++;
//		}
//	}
//	printf("\n%d", j);
//	return 0;
//}

//void exchange1(int a, int b)
//{
//	int among = a;
//	a = b;
//	b = among;
//}
//
//void exchange2(int* pa,int* pb)
//{
//	int among = *pa;
//	*pa = *pb;
//	*pb = among;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("交换前：");
//	scanf("%d%d", &n, &m);
//	int* pn = &n;
//	int* pm = &m;
//	//exchange1(n, m);
//	exchange2(&n, &m);
//	printf("交换后：%d %d",*pn,*pm);
//	return 0;
//}

//int quite(int a, int b)
//{
//	if (a < b)
//	{
//		a = b;
//	}
//	return a;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("请输入两个整数：");
//	scanf("%d%d", &n, &m);
//	int max=quite(n, m);
//	printf("max=%d", max);
//}


//int main()
//{
//	char arr1[] = "HIP";
//	char arr2[] = "################";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//	return 0;
//}
