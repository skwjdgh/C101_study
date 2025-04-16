//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//에라토스테네스의 체 배열 , 소수의 배열을 제외한 나머지 배열임

//int main()
//{
//	int max = 100000;
//	int arr[100000] = {0};
//	int a;
//	int i,j; // 둘이 소수라고 가정

//	printf("정수를 입력하세요");
//	scanf("%d", &a);

//	arr[1] = 1;

//	for (i = 2; i*i < max; i++)
//	{
		
//		for (j = 2; i*j < max;j++)
//		{
//			arr[i * j] = 1;
//		}
//	}

//	if (arr[a] == 0)
//		printf("%d는 소수\n", a);
//	else
//		printf("%d는 소수가 아님\n", a);

//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h> 

#include<stdlib.h> 

#include<windows.h> 

#include<conio.h> 

#include<time.h> 



// 소수구하기(에라토스테네스의 체) 

int main() {

	// 변수 선언 

	int num[100000] = { 0 };

	int i, j;

	char chk;

	int in;



	// 체 초기화 

	for (i = 0; i < 1000; i++) 
	{
		if (i % 2 != 0 && i % 3 != 0)
			num[i] = i;  

	}



	//for (i = 0; i < 1000; i++) 

	//printf("%d  ", num[i]); 

	for (i = 4; i < 1000; i++) {
		chk = 'T';
		if (num[i] != 0) {
			for (j = 2; j <= i; j++) {
				if (num[i] % j == 0) {
					chk = 'F'; break;
				}
			}
		}
		printf("%d번째 : ", i);
		if (chk == 'T') {
			for (j = i; j < 1000; j = j + i)
				num[j] = 0;
		}
	}
	for (i = 1; i < 1000; i++) {
		if (num[i] != 0)
			printf("%d  ", num[i]);

	}

	// 사용자로부터 값 입력 받기 

	printf("1~100 범위의 정수 값을 입력하세요 : ");

	scanf("%d", &in);



	// 소수 계산 및 결과 출력 

	if (num[in] != 0)

		printf("%d는 소수이다.", in);

	else

		printf("%d는 소수가 아니다.", in);

	return 0;

}