#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//char-�ַ�����
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%f - ��ӡ��������-��С��
//%p - �Ե�ַ����ʽ��ӡ
//%x - ��ӡ16��������
//%o...

//ȫ�ֱ���������������������
//int a = 100;ȫ�ֱ���

int main()
{
	//�ֲ�������������

	//int a = 10;�ֲ�����
	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ����ͬ-���ײ�����ᣬ����bug
	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
	//printf("%d\n",a);

	//char ch = 'A';//�ڴ�
	//printf("%c\n",ch);//%c -- ��ӡ�ַ���ʽ������
	//int age = 20;
	//printf("%d\n",age);//%d -- ��ӡ�����Ͻ�������
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

	//short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
	//float weiht = 95.6f;//���ڴ�����4���ֽڣ����С��

	//����2�����ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}