/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	char cal;

	printf("수식을 한 줄로 띄어쓰기로 입력하세요 :");
	scanf("%d %c %d", &a, &cal, &b);

	switch (cal)
	{
	case '+':
		printf(" % d % c % d = % d 입니다.", a, cal, b, a + b);
		break;
	case '-':
		printf(" % d % c % d = % d 입니다.", a, cal, b, a - b);
		break;
	case '*':
		printf(" % d % c % d = % d 입니다.", a, cal, b, a * b);
		break;
	case '/':
		printf(" % d % c % d = % f 입니다.", a, cal, b, a / (float)b);
		break;
	case '%':
		printf(" % d % c % d = % d 입니다.", a, cal, b, a % b);
		break;

	default :
		printf("연산자를 잘못 입력했습니다.");
	}

}*/