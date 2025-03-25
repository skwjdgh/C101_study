#include <stdio.h>

void main()
{
	char a = 'A', b, c;
	char mask = 0x0F; // 0000 1111

	printf("%x & %x = %x \n", a, mask, a & mask); //비트 논리곱 0100 0001 & 0000 1111 = 0000 0001 곱
	printf("%x | %x = %x \n", a, mask, a | mask); //비트 논리합 0100 0001 | 0000 1111 = 0100 1111 합

	mask = 'a' - 'A'; // ascii 'a' = 97, ascii 'A' = 65, 즉 차이는 32이다.

	b = 'A' ^ mask; //0100 0001 ^ 0010 0000 = 0110 0001
	printf("%c ^ %d = %c \n", a, mask, b); // 소문자 'a' 출력
	a = 'a' ^ mask; //0110 0001 ^ 0010 0000 = 0100 0001
	printf("%c ^ %d = %c \n", b, mask, a);

}