#include<stdio.h>;
int x = 10;
int y = 15;
int z = 20;
int main()
{
	int x = y;
	int y = z;
	int z = x;
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("z=%d\n", z);

	return 0;
}