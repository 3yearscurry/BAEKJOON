#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int h, m;

	scanf("%d %d", &h, &m);

	m -= 45;

	if (m < 0)
	{
		m += 60;
		h--;
		if (h < 0)
		{
			h += 24;
		}
	}

	printf("%d %d", h, m);

	return 0;
}