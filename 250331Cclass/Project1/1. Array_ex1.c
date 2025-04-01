#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

/*void main()
{
	int a, b, c, d;
	int hap;

	printf("1번째 숫자를 입력하세요 :");
	scanf(" %d", &a);
	printf("2번째 숫자를 입력하세요 :");
	scanf(" %d", &b);
	printf("3번째 숫자를 입력하세요 :");
	scanf(" %d", &c);
	printf("4번째 숫자를 입력하세요 :");
	scanf(" %d", &d);

	hap = a + b + c + d;

	printf("합계 == > %d \n", hap);

}*/

/*void main()
{
	int aa[4];
	int hap;

	printf("1번째 숫자를 입력하세요 :");
	scanf("%d", &aa[0]);
	printf("2번째 숫자를 입력하세요 :");
	scanf("%d", &aa[1]);
	printf("3번째 숫자를 입력하세요 :");
	scanf("%d", &aa[2]);
	printf("4번째 숫자를 입력하세요 :");
	scanf("%d", &aa[3]);

	hap = aa[0]+aa[1]+ aa[2] +aa[3];

	printf("합계 == > %d \n", hap);
}*/

/*void main()
{
	int aa[4];
	int i,hap=0;

	printf("1번째 숫자를 입력하세요 :");
	scanf("%d", aa+0);
	printf("2번째 숫자를 입력하세요 :");
	scanf("%d", aa+1);
	printf("3번째 숫자를 입력하세요 :");
	scanf("%d", aa+2);
	printf("4번째 숫자를 입력하세요 :");
	scanf("%d", aa+3);

	for (i = 0;i < 4;i++)
		hap += aa[i]; //hap = hap + aa[i]

	printf("합계 == > %d \n", hap);
}*/

/*int main()
{
	int aa[4];
	int hap = 0;
	int i;

	for (i = 0;i <= 3; i++)
	{
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf("%d", &aa[i]);           //aa + i로 사용해도 문제 없음
		// hap += scanf("%d", &aa[i]); 불가능함 scanf는 읽힌 개수를 반환하게 됨
		// hap += *(aa+i); 는 가능함, 포인터 연산 방식으로 hap += aa[i]와 동일함 
	}
	hap = aa[0] + aa[1] + aa[2] + aa[3];
	printf("합계 == > %d \n", hap);

	return 0;
}*/


/*void main()
{
	int aa[4] = { 100,200,300,400 };
	int bb[] = { 100,200,300,400 };
	int cc[4] = { 100,200 };
	int dd[4] = { 0 };
	int i;

	for (i = 0; i <= 3;i++)
	{
		printf("aa[%d] ==> %d\t", i, aa[i]);	
	}
	printf("\n");
	for (i = 0; i <= 3;i++)
	{
		printf("bb[%d] ==> %d\t", i, bb[i]);
	}
	printf("\n");
	for (i = 0; i <= 3;i++)
	{
		printf("cc[%d] ==> %d\t", i, cc[i]);
	}
	printf("\n");
	for (i = 0; i <= 3;i++)
	{
		printf("dd[%d] ==> %d\t", i, dd[i]);
	}
	printf("\n");

}*/

/*void main()

{

	int aa[100], bb[100];
	int i,j;

	
	for (i = 0; i < 100; i ++)
	{
		for (j = 0; j < 200; j +=2 )
			aa[i] = j; //내부에 있으므로 증감이 안됨
		bb[i] = aa[99 - i];
	} 잘못 만듬 다시 해볼것



	// for (i=0 ; i <100 ; i++)
	//		aa[i] = i *2;
	//		printf("aa[%d] = %d ", i , aa[i]);
	// for (i= 99,j = 0; i>=0;i++,j--)
	//		bb[j] = aa[i];
 	printf("%d %d", aa[1], bb[99]);
}*/ 

/*void main()
{

	int aa[] = { 10,20,30,40,50 };	
	int count;

	count = sizeof(aa) / sizeof(int);

	printf("배열 aa[]의 요소의 개수는 %d 입니다. \n", count);
}*/


/*void main()
{

	char ss[8] = "Basic-C";
	int i;

	ss[5] = '#';

	for (i = 0; i < 8;i++)
		printf("ss[%d] ==> %c \n", i, ss[i]);

	printf("문자열 배열 ss ==>%s \n", ss);
}*/

/*void main()
{

	char ss[5] = "abcd";
	char tt[5];
	int i;

	for(i=0; i<4 ; i++)
	{
		tt[i] = ss[3 - i];
	}

	tt[4] = '\0'; //배열 마지막에 널 문자 삽입

	printf("거꾸로 출력한 결과 ==> %s\n", tt);
}*/

/*void main()
{

	char ss[] = "XYZ";
	int len;

	len = strlen(ss);
	
	printf("문자열 \"%s\"의 길이 ==> %d \n", ss, len);

}*/
/*
int MyStrlen(char* in_str); //#include <string.h> 제외해야함

int main()
{
	char ss[] = "My String";
	int len;

	len = MyStrlen(ss);

	printf("문자열 \"%s\"의 길이 ==> %d \n", ss, len);

	return 0;
}

int MyStrlen(char* in_str)
{
	int i = 0;
	while (1)
	{
		if (*(in_str+i) == '\0')
			break;
		i++;
	}
	return i;
}*/
/*void main()
{
	char ss[4];

	strcpy(ss, "XYZ");

	printf("문자열 ss의 내용 ==> %s \n",ss);

}*/

/*void main()
{
	char ss[7] = "XYZ";

	strcat(ss, "ABC");

	printf("문자열 ss의 내용 ==> %s \n", ss);

}*/

/*void MyStrcat(char* src, char* str)
{
	int i, j = 0;
	for (i = MyStrlen(src); i < MyStrlen(str);i++)
		src[i] = str[j];
	src[MyStrlen(src)] = 'WO';
}*/

/*int main()
{
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("첫 번째 문자열을 입력하세요.");
	gets(ss);

	puts("두 번째 문자열을 입력하세요.");
	gets(tt);

	r1 = strlen(ss);
	r2 = strlen(tt);

	printf("첫 번째 문자열의 길이 ==> %d\n", r1);
	printf("두 번째 문자열의 길이 ==> %d\n", r2);

	if (strcmp(ss, tt) == 0)
		puts("두 문자열의 내용이 같습니다. \n");
	else
		puts("두 문자열의 내용이 다릅니다. \n");

	return 0;

}
*/
	