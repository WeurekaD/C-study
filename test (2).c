#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ö�ٳ���
//ö��-һһ�о�
//ö�ٹؼ�-enum

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


//#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}


//int main()
//{
	//const - ������
	//const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[n] = {0};

	//const�ĳ�����
	//const int num = 4
	//printf("%d\n", num);
	//num = 8
	//printf("%d\n", num);
	
	//�������
	//3.14

	//return 0;
//}