#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i,j;
	int n = 123456;
	int m = 1;
	printf("�������˺ţ�");
	scanf("%d", &i);
	printf("���������룺");
	scanf("%d", &j);
	for (;m<3;m++)
	{
		if (j != n)
		{
			printf("�������\n");
			printf("���������룺");
			scanf("%d", &j);
		}
		if(j==n)
			printf("������ȷ����½��...\n");
		break;
	}

	return 0;
}



//int main()
//{
//	char arr1[] = "Welcome to HIP";
//	char arr2[] = "##############";
//	int left = 0;
//	int rigth = sizeof(arr1) / sizeof(arr1[0])-2;
//	for (; left<=rigth; left++, rigth--)
//	{
//		arr2[left] = arr1[left];
//		arr2[rigth] = arr1[rigth];
//		printf("%s\n", arr2);
//	}
//	return 0;
//}



//int main()
//{
//	int i,j=1,n=0;
//	for (i = 1; i <= 10; i++)
//	{
//		j *= i;
//		n += j;
//	}
//	printf("%d", n);
//	return 0;
//}





//int main()
//{
//	int n = 1, m = 1, i = 0,j=0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (; n <= i; n++)
//			m *= n;
//		j += m;
//	}
//	printf("%d\n", j);
//	return 0;
//}





//int main()
//{
//	int n = 1, m = 1,i=0;
//	scanf("%d", &i);
//	for (n = 1; n<=i; n++)
//	{
//		m *= n;
//	}
//	printf("i=%d", m);
//	return 0;
//}





//int main()
//{
//	int i;
//	for (i = 1; 10 >= i; i++)
//		printf("%d ", i);
//	return 0;
//}




//int main()
//{
//	int password[20] = {0};
//	int ch;
//	int ret;
//	printf("���������룺");
//	scanf("%d", &password);
//
//
//	while ('\n' != (ch = getchar()))
//	{
//		;
//	}





//	printf("��ȷ�����룺Y/N\n");
//	ret = getchar();
//	if ('Y'==ret)
//		printf("������ȷ\n");
//	else
//		printf("�������\n");
//
//	return 0;
//}