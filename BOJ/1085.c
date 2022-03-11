#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, y, w, h, lengthX = 0, lengthY = 0;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	lengthY = (h - y) < y ? (h - y) : y;
	lengthX = (w - x) < x ? (w - x) : x;

	printf("%d\n", lengthX < lengthY ? lengthX : lengthY);

	return 0;
}