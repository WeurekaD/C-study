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
	//arr[4]; [] - �±����ò�����
	int a = 10;
	int b = 20;
	int sum = Add(a, b);//() -- �������ò�����
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
	//�� - ��0
	//�� - 0
	//&& - �߼���
	//|| - �߼���
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
	int a = (int)3.14;//double --> int ǿ������ת��
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	//int b = a++;//����++����ʹ�ã���++
	int b = ++a;//ǰ��++����++����ʹ��
	//--ͬ��
	printf("a=%d b=%d\n", a, b);
	return 0;
}
*/

/*
int main()
{
	int a = 0;//4���ֽڣ�32bitλ
	int b = ~a;//b���з��ŵ�����
	//~--����2���ƣ�λȡ��
	//00000000000000000000000000000000
	//11111111111111111111111111111111
	//ԭ�룬���룬����
	//�������ڴ��д����ʱ�򣬴�����Ƕ����ƵĲ���
	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001
	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
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
	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
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
		printf("�ϴ��ֵ��:%d\n", num1);
	else
		printf("�ϴ��ֵ��:%d\n", num2);

	return 0;
}
*/


/*
int main()
{
    //�ַ����Ľ�����־��'\0'
	//"abcdef";
	//'\0'--ת����--0
	//0-->����0
	//'0'->48
	//'a''b''c''0''1''2'
	//EOF - end of file - �ļ�������־ = -1
	return 0;
}
*/