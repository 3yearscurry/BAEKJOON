#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int x, n, a, b;
	scanf("%d", &x);
	scanf("%d", &n);

	int res = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		res += a * b;
	}

	if (x == res) printf("Yes");
	else printf("No");

	return 0;
}