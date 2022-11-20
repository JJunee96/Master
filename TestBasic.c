#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	c = a + b;
	printf("%d + %d = %d", a, b, c);

	return 0;
}