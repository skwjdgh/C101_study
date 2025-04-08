#include <stdio.h>

/*void func1()
{
	printf("void형 함수는 돌려줄 게 없음. \n");
}

int func2()
{
	return 100;
}

void main()
{
	int a;

	func1();

	a = func2();
	printf("int 함수에서 돌려준 값 ==> %d\n", a);
}*/

/*void func1(int a)
{
	a = a + 1;
	printf("전달받은 a ==> %d\n", a);

}

void main()
{
	int a = 10;

	func1(&a);
	printf("func1() 실행 후의 a ==> %d\n", a);

}*/

/*void func1(char a, char b)
{
	int imsi;

	imsi = a;
	a = b;
	b = imsi;
}

void func2(char* a, char* b) // call by reference
{
	int imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;
}

void main()
{
	char x = 'A', y = 'Z';

	printf("원래 값      : x= %c, y = %c\n", x, y);

	func1(x,y);
	printf("값을 전달한 후 : x=%c ,y =%c\n", x, y);

	func2(&x, &y);
	printf("값을 전달한 후 : x=%c ,y =%c\n", x, y);

}*/