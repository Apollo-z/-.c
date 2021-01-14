#include<stdio.h>;

int main()
{
	const float g = 9.18;
	int t = 3;
	int h = 0;
	int G = 0;
	G = g * t * t;
	h = 0.5 * G;
	printf("h=%d\n", h);
	return 0;
}