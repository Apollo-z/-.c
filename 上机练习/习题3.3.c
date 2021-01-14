#include<stdio.h>;
int main()
{
	int a;
	printf("请输入一个数：");
	scanf_s("%d", &a);
	printf("a=%x\n", a);
	printf("a=%o\n", a);
	return 0;

}