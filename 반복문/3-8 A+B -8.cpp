#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (0 < a, b < 10)
			printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return 0;
}