#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return 0;
}
int main()
{
	//int arr[10] = { 0 };
	//arr[4]; [] - 下标引用操作符
	int a = 10;
	int b = 20;
	int sum = Add(a, b);//() -- 函数调用操作符
	return 0;
}
//&  *  . ->


/*
int main()
{
int a = 10;
int b = 20;
int max = 0;

max = (a > b ? a : b);
if (a > b)
max = a;
else
max = b;

return 0;
}
*/



/*
int main()
{
	//真 - 非0
	//假 - 0
	//&& - 逻辑与
	//|| - 逻辑或
	int a = 0;
	int b = 0;
	//int c = a&&b;
	int c = a || b;
	printf("c=%d\n", c);
	return 0;
}
*/

/*
int main()
{
	int a = (int)3.14;//double --> int 强制类型转换
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	//int b = a++;//后置++，先使用，再++
	int b = ++a;//前置++，先++，再使用
	//--同理
	printf("a=%d b=%d\n", a, b);
	return 0;
}
*/

/*
int main()
{
	int a = 0;//4个字节，32bit位
	int b = ~a;//b是有符号的整型
	//~--按（2进制）位取反
	//00000000000000000000000000000000
	//11111111111111111111111111111111
	//原码，反码，补码
	//负数在内存中储存的时候，储存的是二进制的补码
	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001
	printf("%d\n", b);//使用的，打印的是这个数的原码
	return 0;
}
*/


/*
int main()
{
	int a = 10;
	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4=24
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof int);//err
	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//6
	return 0;
}
*/

/*
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max=%d\n", max);
	return 0;
}
*/


/*
int main()
{
	int num1 = 10;
	int num2 = 20;
	if (num1 > num2)
		printf("较大的值是:%d\n", num1);
	else
		printf("较大的值是:%d\n", num2);

	return 0;
}
*/


/*
int main()
{
    //字符串的结束标志：'\0'
	//"abcdef";
	//'\0'--转义字--0
	//0-->数字0
	//'0'->48
	//'a''b''c''0''1''2'
	//EOF - end of file - 文件结束标志 = -1
	return 0;
}
*/