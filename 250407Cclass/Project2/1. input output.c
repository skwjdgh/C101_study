//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>

/*
//void main()
//{
/*
	//int a;
	//float b;
	//char ch;
	//char s[20];

	//printf("정수를 입력 : ");
	//scanf("%d", &a);
	//printf("실수를 입력 : ");
	//scanf("%f", &b);
	//printf("문자를 입력 : ");
	//scanf(" %c", &ch);
	//printf("문자열를 입력 : ");
	//scanf(" %s", s); //배열은 스스로 주소이므로 &를 사용하지 않음


	//printf("\n 정수의 10진수 ==> %d\n", a);
	//printf("정수의 16진수 ==> %X\n", a);
	//printf("정수의 8진수 ==> %o\n", a);
	//printf("실수 ==> %10.3f\n", b);
	//printf("실수(공학용) ==> %e\n", b);
	//printf("문자 ==> %c\n", ch);
	//printf("문자열 ==> %s\n", s);
	//*/
	//}
//*/
/*
void main()
{
	char s[20];

	printf("문자열을 입력 : ");
	gets(s);

	puts(s);
}
*/


/*void main()
{
	char password[5] = "5678";
	char input[5];
	int i;

	printf("비밀번호 4글자를 입력하세요 : ");

	for (i = 0;i < 4;i++)
		input[i] = getch();

		if (strcmp(password,input) == 0)  4를 쓰면 오류 발생
		{
			printf("\n비밀번호 통과 ~~ \n");
		}
		else
		{
			printf("\n입력한 비밀번호");
			for (i = 0;i < 4;i++)
				putch(input[i]);

			printf(" 가 틀렸음\n");

		}

}*/