#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
}