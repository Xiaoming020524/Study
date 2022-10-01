#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	int i=1;
	while (10>=i)
		printf("%d ", i++);
	return 0;
}


   
//int main()
//{
//	int num;
//	for (num=1;100 >= num;num++)
//	{
//		if (0 == num % 2)
//			;
//		else
//			printf("%d\n", num);
//	}
//	return 0;
//}



//int main()
//{
//	int num;
//	printf("请输入一个数字：");
//	scanf("%d", &num);
//	
//	if (0==num%2)
//		printf("该数字为偶数\n");
//	else
//		printf("该数字为奇数\n");
//	return 0;
//}



//int main()
//{
//	int age = 77;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 100)
//		printf("老年\n");
//	else
//		printf("长寿\n");
//	return 0;
//}
// 
// 
// 
// 
//int main()
//{
//	int age = 0;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}