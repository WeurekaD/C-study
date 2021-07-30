#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//char-字符类型
//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字-打小数
//%p - 以地址的形式打印
//%x - 打印16进制数字
//%o...

//全局变量的作用域是整个工程
//int a = 100;全局变量

int main()
{
	//局部变量的作用域

	//int a = 10;局部变量
	//局部变量和全局变量的名字建议不要用相同-容易产生误会，产生bug
	//当局部变量和全局变量的名字相同的时候，局部变量优先
	//printf("%d\n",a);

	//char ch = 'A';//内存
	//printf("%c\n",ch);//%c -- 打印字符格式的数据
	//int age = 20;
	//printf("%d\n",age);//%d -- 打印整型上进制数据
	//long num = 100;
	//printf("%d\n", num);
	//float f = 5.0;   
	//printf("%f\n", f);
	//double d = 3.14;

	//printf("%lf\n", d);
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4/8
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8

	//short age = 20;//想内存申请2个字节=16bit位，用来存放20
	//float weiht = 95.6f;//向内存申请4个字节，存放小数

	//计算2个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//取地址符号&
	//C语言语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}