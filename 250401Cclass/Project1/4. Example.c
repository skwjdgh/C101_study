/*#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>*/

/*int main()
{
	//example 24

	char str[9];
	char* s;

	int i,count;

	printf("문자열을 입력하세요 :");
	scanf("%s", str);

	s = str;

	count = strlen(str);


	for (i = 0; i < count; i++)
	{
		printf("%c", *(s + count - (i + 1)));
	}

	return 0;
}*/

/*int main()

{
	int a, b;
	int *p1; 
	int *p2;
	int tmp;

	p1 = &a;
	p2 = &b;


	printf("a값 입력 :");
	scanf("%d", &a);
	printf("b값 입력 :");
	scanf("%d", &b);

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf(" %d %d", a, b);
	return 0;


}*/

/*int main()
{
	int s[10] = { 1,0,3,2,5,4,7,6,9,8 };
	int i,j;
	int tmp; 

	int* p;

	p = s;

	puts(s);


	for (i = 0; i < 9; i++)
	{
		for(j = i+0; j<10 ; j++)
		{
			if(*(p+i) > *(p+j))
			{
				tmp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = tmp;
			}
		}

	}
	for (i = 0;i < 10;i++)

	{
		printf("%d", *(p + i));

	}
	printf("\n");
}*/