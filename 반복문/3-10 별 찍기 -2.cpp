#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n, j;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (j = 1; j <= (n - i); j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}