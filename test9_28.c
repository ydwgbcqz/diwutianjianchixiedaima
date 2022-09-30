#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";//字符串结束标志\0，出现这个就会结束，不再打印后面内容
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//memory -内存-set设置
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
//写一个函数交换两个整型变量的内容
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
//}//这样打印出的数值并没有吧a和b进行交换，因为修改的地址是x和y的地址，不是a和b的地址，这种方法不可行
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}
//void Swap2(int* pa, int* pb)//写一个函数交换两个整型变量的内容
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
//	Swap2(&a, &b);//交换a和b的地址 
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//} 
//int is_prime(int n)//判断这个数是否为素数，是素数需要返回1
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;//如果不是素数，则直接返回0，同时结束这个函数和循环
//	}
//	return 1;
//}
//int main()//写一个函数可以判断100-200的数中哪些是素数
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
//int is_prime(int n)//优化判断这个数是否为素数，是素数需要返回1
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n);j++)
//	{
//		if (n % j == 0)
//			return 0;//如果不是素数，则直接返回0，同时结束这个函数和循环
//	}
//	return 1;
//}
//int main()//写一个函数可以判断100-200的数中哪些是素数
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
//int main()//写一个函数判断一年是否为闰年
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
// //这个是错误的写法
//int binary_search(int arr[], int k)//传递过去的是数组arr首元素的地址，虽然这里写的看着是数组，但其实本质上这里的arr是一个指针
//{
//	//算法的实现
//	int sz = sizeof(arr) / sizeof(arr[0]);//所以这里计算的不是数组的字节数除以数组中单个变量的字节数，这里是64位平台，所以
//	                                      //指针变量的大小是8个字节，然后除以一个变量的四个字节，所以算出来是2，所以计算错误
//	                                      //所以引用函数的时候要注意这些问题
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
//int main()//写一个函数，实现一个整形有序数组的二分查找
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//    int ret= binary_search(arr, k);//注意：数组在传参的时候传的并不是整个数组，仅仅传的是数组第一个元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//这个是正确的写法
//int binary_search(int arr[], int k,int sz)
//{
//	//算法的实现
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
//int main()//写一个函数，实现一个整形有序数组的二分查找
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);//在这里把sz算出来，再传到上面函数中
//	int ret = binary_search(arr, k,sz);//注意：数组在传参的时候传的并不是整个数组，仅仅传的是数组第一个元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//void Add(int* p)
//{
//	(* p)++;//*p++这样写不对，++的优先级比较高，++是作用于p，而不是*p,应该这样写(* p)++;
//}
//int main()//写一个函数，每调用一次这个函数，就会将num的值增加1
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
//void new_line()//函数的嵌套调用
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
//int main()//链式访问
//{
//	int len = 0;
//	printf("%d\n", len = strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d",43) ));//printf函数打印后返回值是打印出的个数，上来第一次这里打印出43，打印了两个数，返回值是2，然后再是1，即4321
//	return 0;
//}
//int Add(int x, int y);//函数声明
// //这样写太啰嗦了
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a,b);//函数调用
//	printf("%d\n", sum);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//#include"add.h"//引用自己的头文件要加""而不是<>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a,b);//函数调用
//	printf("%d\n", sum);
//	return 0;
//}