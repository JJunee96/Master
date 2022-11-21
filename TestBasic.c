#include <stdio.h>
int main()
{
	int a, b, c;

	printf("첫번째 계산할 항목을 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 계산할 항목을 입력하세요 : ");
	scanf_s("%d", &b);
	c = a + b;
	printf("%d + %d = %d", a, b, c);



	return 0;
}