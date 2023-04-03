#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n / 4; i++) {
		printf("long ");
	}
	printf("int");

	return 0;
}