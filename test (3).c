#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	//printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\32');
	//\32 -- 32��2��8��������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	//32 -- > 10���� 26-->��ΪASCII��ֵ������ַ�
	return 0;
}


// \ - ת���ַ�
//int main()
//{
//	printf("%c\n", '\'');
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";//����
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	printf("%d\n", strlen(arr1));//strlen - string length - �����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
	//�����ڼ�����ϴ����ʱ�򣬴�����Ƕ�����
	//ASCII����
	//ASCII��ֵ
	//char arr1[] = "abc";//����
	//"abc" = 'a' 'b' 'c' '\0'--�ַ����Ľ�����־
	//char arr2[] = { 'a', 'b', 'c', 0 };
	//'a' 'b' 'c'
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//return 0;
//}