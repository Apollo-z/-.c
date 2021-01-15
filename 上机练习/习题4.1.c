#include<stdio.h>;
int main()
{
	const char rank;
	printf("请输入分数等级:（A,B,C,D,E,F)\n");
	scanf_s("%c", &rank);
	switch (rank)
	{
	case'A':printf("A(90~100)\n"); break;
	case'B':printf("B(80~89)\n"); break;
	case'C':printf("C(70~79)\n"); break;
	case'D':printf("D(60~69)\n"); break;
	case'E':printf("E(50~59)\n"); break;
	case'F':printf("F(40~49)\n"); break;
	default:printf("error!\n"); break;
	}
	return 0;
}