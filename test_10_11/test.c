#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void my_Tables(int i)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= i; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			int mul = a * b;
//			printf("%-3d*%-3d=%-3d ", a, b, mul);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	my_Tables(i);
//	return 0;
//}

//int DigitSum(unsigned int i)
//{
//	if (i > 9)
//	{
//		return DigitSum(i / 10) + i % 10;
//	}
//	else
//	{
//		return i;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int result = DigitSum(i);
//	printf("%d\n", result);
//	return 0;
//}

//double function(int n, int k)
//{
//	//n^ k == n * n ^ (k - 1)
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n * function(n, k - 1);
//	}
//	if (k < 0)
//	{
//		return (1.0 / (function(n, -k)));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double exp = function(n, k);
//	printf("%lf\n", exp);
//	return 0;
//}
//
//int my_strlen(char* arr)
//{
//	int i = 0;
//	int count = 0;//¼ÆÊý
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		count++;
//	}
//	return count;
//}

//void reverse_string(char* arr)
//{
//	int med=my_strlen(arr);
//	int left = 0;
//	int right = med - 1;
//	while (left <= right)
//	{
//		int among = arr[left];
//		arr[left] = arr[right];
//		arr[right] = among;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
//void reverse_string(char* arr)
//{
//	int med = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[med - 1];
//	arr[med - 1] = '\0';
//	if (my_strlen(arr + 1) > 1)
//		reverse_string(arr + 1);
//	arr[med - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
