#include <stdio.h>

/*int main()
{
	char ch;
	char* p;

	ch = 'A';
	p = &ch;

	
	printf("ch가 가지고 있는 값 : ch ==> %c \n", ch);
	printf("ch의 주소 (address) : ch ==> %d \n", &ch);
	printf("p가 가지고 있는 값 : p ==> %d \n", p);
	printf("p가 가지고 있는 값 : *p ==> %c \n", *p);




	return 0;
}*/

/*int main()
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;

	*p = 'Z';

		printf("ch가 가지고 있는 값 : ch ==> %c \n\n", ch);


}*/


/*int main()
{
	char s[8] = "Basic-C";
	char* p; //포인터p
	int i;


	p = s; //포인터 p 에 문자열 s의 주소값 입력됨

	for (i = sizeof(s) - 2; i >= 0; i--) //시작값은 문자열의 크기에서 2를 빼줌  0이 될 때까지 i씩 빼줌
		printf("%c", *p + i);

	printf("\n");


	return 0;
}*/

/*int main()
{

	char s[8] = "Basic-C";
	char* p;
	int i;

	p = s;

	for (i = sizeof(s) - 2;i >= 0;i--)
		printf("%c", *(p + i));

	printf("\n");
}*/