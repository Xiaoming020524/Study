#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct stu
{
	char name[10];
	int age;
	char id[20];
};

int main()
{
	struct stu s1 = { "ÕÅÈý", 20, "202005440441" };
	struct stu* ps = &s1;
	printf("%d\n",s1.age);
	printf("%s\n", ps->name);
	printf("%s\n", (*ps).id);

	return 0;
}

//int main()
//{
//	int a = 0, b = 2, c = 3, d = 4;
//	int i;
//	i = a++ && ++b && d++;
//	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	max=(a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d%d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}