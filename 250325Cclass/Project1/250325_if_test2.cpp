/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	char cal;

	printf("첫 번째 수를 입력하세요 :");
	scanf("%d", &a);

	printf("두 번째 수를 입력하세요 :");
	scanf("%d", &b);

	printf("계산할 연산자를 입력하세요 :");
	scanf(" %c", &cal); //" %c" 버퍼에 남아있는 \n이 그대로 값으로 입력됨


	if (cal == '+')
		printf(" %d %c %d = %d입니다.\n", a, cal, b, a + b);
	else if (cal == '-')
		printf(" %d %c %d = %d입니다.\n", a, cal, b, a - b);
	else if (cal == '*')
		printf(" %d %c %d = %d입니다.\n", a, cal, b, a * b);
	else if (cal == '/')
		printf(" %d %c %d = %f입니다.\n", a, cal, b, a / (float)b);
	else if (cal == '%')
		printf(" %d %c %d = %d입니다.\n", a, cal, b, a / b);
	else
		printf("연산자를 잘못 입력하셨습니다.\n");


}*/