#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;
    //10#sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	//计算数组元素个数
	//个数 = 数组是大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);
	/*
	int a = 10;
	//sizeof 计算的是变量/类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	*/
	return 0;
}


/*
//单目操作符
//双目操作符
//三目操作符
int main()
{
	//int a = 10;
	//int b = 20;
	//a + b;//双目操作符
	//c语言中我们表示真假
	//0-假
	//非0-真
	int a = 10;
	printf("%d\n", a);
	printf("%d\n", !a);
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	a = 20;//赋值  ==判断相等
	a = a + 10;//1
	a += 10;//2
	a = a - 20;//1
	a -= 20;//2
	a = a & 2;//1
	a &= 2;//2
	//复合赋值符
	//
	return 0;
}
*/

/*
int main()
{
	//(2进制)位操作
	//&按位与
	//|按位或
	//^按位异或
	//int a = 3;
	//int b = 5;
	//int c = a&b;
	//011
	//101
	//001

	//int a = 3;
	//int b = 5;
	//int c = a|b;
	//011
	//101
	//111

	int a = 3;
	int b = 5;
	int c = a^b;
	//异或的计算规律
	//对应的二进制位相同，则为0
	//对应的二进制位相异，则为1
	//011
	//101
	//110
	printf("%d\n", c);
	return 0;
}
*/

/*
int main()
{
	//移（2进制）位操作符
	//<<左移
	//>>右移
	int a = 1;
	//整型1占4个字节-32bit位
	//00000000000000000000000000000001
	int b = a << 1;
	//b = a + 1;
	printf("%d\n",b);
	printf("%d\n",a);
	return 0;
}
*/

/*
int main()
{
	int a = 5 % 2;//取模
	printf("%d\n", a);
	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个存放10个整数数字的数组
	//char ch[20];
	//float arr2[5];
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	//printf("%d\n", arr[4]);//下标的方式访问元素
	//arr[下标]
	return 0;
}
*/

/*
int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum1 = 0;
	int sum2 = 0;
	int a = 100;
	int b = 200;
	sum1 = Add(num1, num2);
	sum2 = Add(a, b);
	printf("sum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);
	return 0;
}
*/



/*
int main()
{
	int line = 0;
	printf("学习C语言\n");
	while (line < 20000)
	{
		printf("敲一行代码:%d\n", line);
		line++;
	}
	if (line>=20000)
	printf("好offer\n");
	return 0;
}
*/