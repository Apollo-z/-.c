#include<stdio.h>;
int main()
{
	int a, b, c,e;
	int sum = 0;
	int d = 3;
	printf("请输入三个数字：");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	sum = a + b + c;
	e = sum / d;
	printf("平均数=%d\n", e);
	return 0;
}