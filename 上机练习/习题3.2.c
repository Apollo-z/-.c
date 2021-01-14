#include<stdio.h>;
int main()
{
	
	int a, b, c,d,e;
	printf("请输入一个三位数：");
	scanf_s("%d", &d);
	a = d % 10;
	d = d / 10;
	b = d % 10;
	c = d / 10;
	e = a + b;
	printf("e=%d\n", e);
	return 0;
}