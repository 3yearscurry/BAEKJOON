#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int H, M, C;

	scanf("%d %d", &H, &M);
	scanf("%d", &C);

	if (M + C < 60)
		printf("%d %d", H, M + C);
	else {
		int hour = (M + C) / 60;
		int min = (M + C) % 60;
		if (H + hour < 24)
			printf("%d %d", H + hour, min);
		else
			printf("%d %d", H + hour - 24, min);
	}
}