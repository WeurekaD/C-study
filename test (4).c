#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };//10������Ԫ�ص�����
	int sz = 0;
    //10#sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	//��������Ԫ�ظ���
	//���� = �����Ǵ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);
	/*
	int a = 10;
	//sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	*/
	return 0;
}


/*
//��Ŀ������
//˫Ŀ������
//��Ŀ������
int main()
{
	//int a = 10;
	//int b = 20;
	//a + b;//˫Ŀ������
	//c���������Ǳ�ʾ���
	//0-��
	//��0-��
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
	a = 20;//��ֵ  ==�ж����
	a = a + 10;//1
	a += 10;//2
	a = a - 20;//1
	a -= 20;//2
	a = a & 2;//1
	a &= 2;//2
	//���ϸ�ֵ��
	//
	return 0;
}
*/

/*
int main()
{
	//(2����)λ����
	//&��λ��
	//|��λ��
	//^��λ���
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
	//���ļ������
	//��Ӧ�Ķ�����λ��ͬ����Ϊ0
	//��Ӧ�Ķ�����λ���죬��Ϊ1
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
	//�ƣ�2���ƣ�λ������
	//<<����
	//>>����
	int a = 1;
	//����1ռ4���ֽ�-32bitλ
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
	int a = 5 % 2;//ȡģ
	printf("%d\n", a);
	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//����һ�����10���������ֵ�����
	//char ch[20];
	//float arr2[5];
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
	//arr[�±�]
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
	printf("ѧϰC����\n");
	while (line < 20000)
	{
		printf("��һ�д���:%d\n", line);
		line++;
	}
	if (line>=20000)
	printf("��offer\n");
	return 0;
}
*/