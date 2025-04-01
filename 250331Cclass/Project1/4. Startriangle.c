
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

/*int main()
{
	char a[100];
	
	int point; //입력값 
	int count=0; //카운터

	int ts = 1;
	int i;

	printf("가운데 꼭지점의 위치를 입력하세요");
	scanf("%d",&point); //별의 위치 입력

	int end = 2 * point-1;

	for (i = 0; i < end; i++)
	{
		a[i] = ' '; //배열 초기화
		//문자열 끝
	}
	a[end] = '\0';

	a[point-1] = '*'; //첫 입력값은 꼭지점만 '*'
	puts(a); //공백 입력을 위해 put 사용하여 라인 출력


	for (i = 1;i < end; i++)
	{
		if (ts < point)
		{
			a[point - ts] = '*';
			a[point + ts] = '*';
			ts++;
		}
		puts(a);
	}

	for (i = 0;i < end ; i++) //point -- 해서 영이 된다면 전부 *
	{
		a[point] = '*';
		a[end] = '\0';
		puts(a);
	}
	

	return 0;

}*/

/*int main()
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < j + 1; i++)
		{
			if (i == 0 || j == 9 || i == j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}*/

int main()
{
	//만들 삼각형의 크기를 정한다. 밑 변이 11개의 별로 이루어진 삼각형
	char star[11];
	int point = 5;
	int i, j;





}