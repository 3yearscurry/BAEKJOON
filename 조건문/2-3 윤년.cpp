#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int year;
	scanf("%d", &year);

	int ret;

	if (year % 400 == 0) ret = 1;
	else if (year % 100 == 0) ret = 0;
	else if (year % 4 == 0) ret = 1;
	else ret = 0;

	printf("%d\n", ret);

	return 0;
}