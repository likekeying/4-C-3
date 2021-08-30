#include<stdio.h>
int main(void)
{
	int a = 10;
	int* p = &a;
	//有一种变量是用来存放地址的，---指针变量
	//printf("%p\n", &a);
	*p = 20;//*解引用操作符，
	printf("a=%d\n", a);
	return 0;
}

////宏的定义
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
//	//static修饰局部变量，局部变量的生命周期变长
//  //static修饰全局变量，改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
//  //static修饰函数，改变了函数的链接属性
//  //extern声明外部符号
//entern; int Add(int, int);
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//	static int a = 1;//a是一个静态的局部变量
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
//	register int a = 10;//建议把a放入寄存器，需要频繁使用a，速度更快
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	arr[4];//[]--下标引用操作符
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int MAX = 0;
//	//MAX = (a > b ? a : b);条件操作符
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
//	printf("a=%d b=%d\n", a, b);//后置++，先使用，再++
//	return 0;
//}

//int main(void)
//{
//	int a = 0;
//	int b = ~a;
//	//~--按2进制位取反
//	//0000000000000000000000
//	//1111111111111111111111
//	//原码、反码、补码
//	//负数在内存中储存的是二进制的补码
//	printf("%d\n", b);//使用的和打印的是这个数的原码
//	return 0;
//}