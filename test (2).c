#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//枚举常量
//枚举-一一列举
//枚举关键-enum

enum Color
{
	RED,
	YELLOW,
	BLUE
};

int main()
{
	enum Color color = BLUE;
	printf("%d\n",color );
	return 0;
}


//#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}


//int main()
//{
	//const - 常属性
	//const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
	//int arr[n] = {0};

	//const的常变量
	//const int num = 4
	//printf("%d\n", num);
	//num = 8
	//printf("%d\n", num);
	
	//字面变量
	//3.14

	//return 0;
//}