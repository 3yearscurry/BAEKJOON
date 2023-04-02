#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    long a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    printf("%ld", a + b + c);

    return 0;
}