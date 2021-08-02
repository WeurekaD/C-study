#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	//printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\32');
	//\32 -- 32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32 -- > 10进制 26-->作为ASCII码值代表的字符
	return 0;
}


// \ - 转义字符
//int main()
//{
//	printf("%c\n", '\'');
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";//数组
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
	//数据在计算机上储存的时候，储存的是二进制
	//ASCII编码
	//ASCII码值
	//char arr1[] = "abc";//数组
	//"abc" = 'a' 'b' 'c' '\0'--字符串的结束标志
	//char arr2[] = { 'a', 'b', 'c', 0 };
	//'a' 'b' 'c'
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//return 0;
//}