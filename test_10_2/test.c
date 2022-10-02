#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int i, j,ride;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (j = 0; j < sz; j++)
	{
		for (i = 0; i < sz&&i<=j; i++)
		{
			ride = arr[i] * arr[j];
			//            左对齐补齐两位
			printf("%d*%d=%-2d  ", arr[i], arr[j], ride);
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//	int i = 1,j=2;
//	int arr[] = { 0,0,0,0,0,0,0,0,0,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d%d%d%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
//	for (; j < sz; j++)
//	{
//		if (arr[i] < arr[j])
//		{
//			arr[i] = arr[j];
//		}
//	}
//	printf("最大值为：%d", arr[i]);
//	return 0;
//}

//int main()
//{
//	int i;
//	double n, m, h=0.0, g=0.0, z;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			n = 1.0 / i;
//			h += n;
//		}
//		if (i % 2 == 0)
//		{
//			m= 1.0 / i;
//			g+= m;
//		}
//	}
//	z = h - g;
//	printf("%lf\n", z);
//	return 0;
//}

//int main()
//{
//	int i,count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int i;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int n = 0;
//		for (n = 2; n < i; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (n == i)
//		{
//			printf("%d ", i);
//			j++;
//		}
//	}
//	printf("\n素数有：%d", j);
//	return 0;
//}


//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//			printf("%d ", i);
//		return 0;
//}

//int main()
//{
//	int i,j;
//	printf("请输入两个数：");
//	scanf("%d%d", &i, &j);
//	if (i < j)
//	{
//		int a = i;
//		i = j;
//		j = a;
//	}
//	for (; i % j != 0;)
//	{
//		int n = i % j;
//		i = j;
//		j = n;
//	}
//	printf("这两个数的最大公约数为：%d", j);
//	return 0;
//}


//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%3==0)
//			printf("%d ",i);
//	}
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		int d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		int d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}




//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//			printf("%d %d %d\n",a,b,c);
//		else if(c > a)
//			printf("%d %d %d\n",c,a,b);
//		else
//			printf("%d %d %d\n", a, c, b);
//	}
//	else
//	{
//		if (a> c)
//			printf("%d %d %d\n", b, a, c);
//		else if (c > b)
//			printf("%d %d %d\n", c, b, a);
//		else
//			printf("%d %d %d\n", b, c, a);
//	}
//	return 0;
//}