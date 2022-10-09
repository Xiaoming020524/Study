#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0x1122334455667788;
//	int* pa=&a;
//	*pa = 0;
//	/*char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);*/
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);
//
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d ", *(p + i));
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//int*** pppa = &ppa;
//	printf("%p\n", ppa);
//	printf("%p\n", &pa);
//
//	printf("%p\n", pa);
//	printf("%p\n", &a);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* pa = arr;
//	//*pa = 1;
//	//printf("%d\n", a);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//		//printf("%p ",(pa+i));
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#define ARR_LEN 255 /*数组长度上限*/
//#define elemType int /*元素类型*/
//
//void bubbleSort(elemType arr[], int len) {
//    elemType temp;
//    int i, j;
//    for (i = 0; i < len - 1; i++) /* 外循环为排序趟数，len个数进行len-1趟 */
//        for (j = 0; j < len - 1 - i; j++) { /* 内循环为每趟比较的次数，第i趟比较len-i次 */
//            if (arr[j] > arr[j + 1]) { /* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） */
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//}
//
//int main(void) {
//    elemType arr[ARR_LEN] = { 3,5,1,-7,4,9,-6,8,10,4 };
//    int len = 10;
//    int i;
//
//    bubbleSort(arr, len);
//    for (i = 0; i < len; i++)
//        printf("%d\t", arr[i]);
//    putchar('\n');
//
//    return 0;
//}

//void init(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reserse1(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz/2; i++)
//	{
//		int among = arr[i];
//		arr[i] = arr[sz-1-i];
//		arr[sz - 1 - i] = among;
//	}
//}
//
//void reserse2(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa = arr;
//	//print(pa,sz);
//	//init(pa,sz);
//	reserse1(pa, sz);
//	print(pa, sz);
//	reserse2(pa, sz);
//	print(pa, sz);
//}

int main()
{
	int arr1[10] = { 1,1,1,1,1,1,1,1,1,1 };
	int arr2[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
			arr2[i] = tmp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
