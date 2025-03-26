#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int start, end, cout, temp;
	int i;
	int hap = 0;

	printf("두 개의 숫자를 입력하세요\n");
	scanf("%d %d", &start, &end);
	printf("원하는 배수를 입력하세요\n");
	scanf("%d", &cout);

	printf("합계의 시작값 ==> %d\n", start);
	printf("합계의 끝값 ==> %d\n", end);
	printf("배수 ==> %d\n", cout);

	if (start > end)
	{
		temp = start;
		start = end;
		end = temp;
	}

	for (i = start; i <= end;i++)
	{
		if (i % cout == 0)
			hap = hap + i;
	}

printf("%d 부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, cout, hap);
 
}