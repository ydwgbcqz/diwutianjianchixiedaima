#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";//�ַ���������־\0����������ͻ���������ٴ�ӡ��������
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//memory -�ڴ�-set����
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 12;
//	int b = 11;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//дһ�����������������ͱ���������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	tmp = a;
//	a=b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//		return 0;
//}
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}//������ӡ������ֵ��û�а�a��b���н�������Ϊ�޸ĵĵ�ַ��x��y�ĵ�ַ������a��b�ĵ�ַ�����ַ���������
//int main()
//{
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}
//void Swap2(int* pa, int* pb)//дһ�����������������ͱ���������
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//����a��b�ĵ�ַ 
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//} 
//int is_prime(int n)//�ж�������Ƿ�Ϊ��������������Ҫ����1
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;//���������������ֱ�ӷ���0��ͬʱ�������������ѭ��
//	}
//	return 1;
//}
//int main()//дһ�����������ж�100-200��������Щ������
//{
//	int i = 0;
//	for (i = 100;i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<math.h>
//int is_prime(int n)//�Ż��ж�������Ƿ�Ϊ��������������Ҫ����1
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n);j++)
//	{
//		if (n % j == 0)
//			return 0;//���������������ֱ�ӷ���0��ͬʱ�������������ѭ��
//	}
//	return 1;
//}
//int main()//дһ�����������ж�100-200��������Щ������
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0)|| (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()//дһ�������ж�һ���Ƿ�Ϊ����
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
// //����Ǵ����д��
//int binary_search(int arr[], int k)//���ݹ�ȥ��������arr��Ԫ�صĵ�ַ����Ȼ����д�Ŀ��������飬����ʵ�����������arr��һ��ָ��
//{
//	//�㷨��ʵ��
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����������Ĳ���������ֽ������������е����������ֽ�����������64λƽ̨������
//	                                      //ָ������Ĵ�С��8���ֽڣ�Ȼ�����һ���������ĸ��ֽڣ������������2�����Լ������
//	                                      //�������ú�����ʱ��Ҫע����Щ����
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()//дһ��������ʵ��һ��������������Ķ��ֲ���
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//    int ret= binary_search(arr, k);//ע�⣺�����ڴ��ε�ʱ�򴫵Ĳ������������飬���������������һ��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//�������ȷ��д��
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()//дһ��������ʵ��һ��������������Ķ��ֲ���
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�������sz��������ٴ������溯����
//	int ret = binary_search(arr, k,sz);//ע�⣺�����ڴ��ε�ʱ�򴫵Ĳ������������飬���������������һ��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//void Add(int* p)
//{
//	(* p)++;//*p++����д���ԣ�++�����ȼ��Ƚϸߣ�++��������p��������*p,Ӧ������д(* p)++;
//}
//int main()//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//void new_line()//������Ƕ�׵���
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//		return 0;
//}
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//int main()//��ʽ����
//{
//	int len = 0;
//	printf("%d\n", len = strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d",43) ));//printf������ӡ�󷵻�ֵ�Ǵ�ӡ���ĸ�����������һ�������ӡ��43����ӡ��������������ֵ��2��Ȼ������1����4321
//	return 0;
//}
//int Add(int x, int y);//��������
// //����д̫������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a,b);//��������
//	printf("%d\n", sum);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//#include"add.h"//�����Լ���ͷ�ļ�Ҫ��""������<>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a,b);//��������
//	printf("%d\n", sum);
//	return 0;
//}