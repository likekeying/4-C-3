#include<stdio.h>
int main(void)
{
	int a = 10;
	int* p = &a;
	//��һ�ֱ�����������ŵ�ַ�ģ�---ָ�����
	//printf("%p\n", &a);
	*p = 20;//*�����ò�������
	printf("a=%d\n", a);
	return 0;
}

////��Ķ���
//#define MAX(x,y) (x>y?x:y)
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//void test()
//{
//	//static���ξֲ��������ֲ��������������ڱ䳤
//  //static����ȫ�ֱ������ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//  //static���κ������ı��˺�������������
//  //extern�����ⲿ����
//entern; int Add(int, int);
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main(void)
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main(void)
//{
//	register int a = 10;//�����a����Ĵ�������ҪƵ��ʹ��a���ٶȸ���
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	arr[4];//[]--�±����ò�����
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int MAX = 0;
//	//MAX = (a > b ? a : b);����������
//	if (a > b)
//		MAX = a;
//	else
//		MAX = b;
//	printf("MAX=%d\n", MAX);
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int b = a++;
//	printf("a=%d b=%d\n", a, b);//����++����ʹ�ã���++
//	return 0;
//}

//int main(void)
//{
//	int a = 0;
//	int b = ~a;
//	//~--��2����λȡ��
//	//0000000000000000000000
//	//1111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д�����Ƕ����ƵĲ���
//	printf("%d\n", b);//ʹ�õĺʹ�ӡ�����������ԭ��
//	return 0;
//}