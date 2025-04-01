#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

/*int main()
{
	char aa[7];
	char bb[7];
	int i;

	puts("첫 번째 문자열을 입력하세요.");
	gets(aa);

	for (i = 0; i < 6; i++)
	{
		bb[5 - i] = aa[i];
	}
	puts(bb);



}*/

/*int main()
{
	char aa[10];
	int i, count=0;

	printf("문자열을 입력하세요 :");
	scanf("%s", aa);

	for (i = 0;i < 10; i++)
	{
		if (aa[i] == '\0')
		{
			count = i-1;
			break;
		}
	}
	printf("내용을 거꾸로 출력 ==> ");
	for (i = count; i >= 0; i--)
	{
		printf("%c", aa[i]);
	}
	return 0;

}*/

/*int main()
{
	char a[100];
	char b[100] = { 0 };

	int i;
	int len;

	printf("문자열을 입력해 주세요 : ");
	gets(a); //scanf를 사용할 경우, 띄어쓰기로 구분하기 때문에 띄어쓰기에 따라 결과가 다르게 나옴

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		if (a[i] == '\0')
		{
			break;
		}
		else
		{
			if (a[i] >= 65 && a[i] <= 90)
				b[i] = a[i] + 32;

			else if (a[i] >= 97 && a[i] <= 122)
				b[i] = a[i] - 32;
			else
				b[i] = a[i];

		}
	}
	
	printf("변환된 문자 ==> ");
	puts(b);

	//대문자 65 - 90
	//소문자 97 - 122

	return 0;
}*/

/*int main()
{
	int mul[9][9];
	int i, j;




	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
		{ 
			mul[i][j] = (i+1) * (j+1);
			printf(" %d X %d = %d \n", i+1, j+1, mul[i][j]);
		}
		printf("\n");


	return 0;
}*/

/*int main()
{
	char aa[100];
	char A='i', B='#';
	int i,len;

	printf("문자열을 입력해 주세요 : ");
	gets(aa);

	len = strlen(aa);
	for (i = 0; i < len; i++)
	{
		if (aa[i] == A)
			aa[i] = B;
	}

	puts(aa);

	return 0;
}*/
