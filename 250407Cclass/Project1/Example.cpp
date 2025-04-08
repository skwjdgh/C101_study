#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

/*void multiplier(int a)
{

	for (i = 1;i < 10;i++)
	{
		printf(" %d X %d = %d\n", a, i, a*i);
	}
 
}

int main()
{
	int a;
	int result;

	printf("출력하고 싶은 단을 입력 :");
	scanf("%d", &a);

	multiplier(a);

	return 0;
}*/
/*
char upper(char ch)
{
	int result;
	result = ch - ('a' - 'A'); //('a' - 'A') 는 ascii 에서의 소문자, 대문자의 차이를 알 수 있다. 이를 ch에서 빼거나 더할 경우, 소문자와 대문자를 구분할 수 있다.
	return result;
}

char lower(char ch)
{
	int result;
	result = ch + ('a' - 'A');
	return result;
}

void main()
{
	char in[100], out[100];
	char ch;
	int i= 0;

	printf("문자열을 입력");
	scanf("%s", &in);

	for (i = 0; i < strlen(in); i++)
	{
		ch = in[i];
		if (ch >= 'A' && ch <= 'Z')
			out[i] = lower(ch);
		else if (ch >= 'a' && ch <= 'z')
			out[i] = upper(ch);
		else
			out[i] = ch;
	}
	out[i] = '\0';
	printf("변환된 결과 ==> %s\n", out);


}

*/

int getNumber()
{
	return rand() % 45 + 1;
}


void main()
{
	short int lotto[6] = { 0, };
	int i, k, num;
	char dup = 'N';


	printf("**로또 추첨을 시작합니다.**\n");
	srand((unsigned)time(NULL));
	
	for (i = 0;i < 6;)
	{
		num = getNumber();

		for (k = 0;k < 6;k++)
		{
			if (lotto[k] == num)
				dup = 'Y';

		}
		if (dup == 'N')
			lotto[i++] = num;

		else
			dup = 'N';
	}

	printf("추점된 로또 번호 ==> ");
	for (i = 0;i < 6;i++)
	{
		printf("%d ", lotto[i]);
	}

	printf("\n\n");

}