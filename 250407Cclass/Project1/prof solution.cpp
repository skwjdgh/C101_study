// 구구단 프로그램 

#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h> 



void gugudan(int x) {

	int i;



	for (i = 1; i < 10; i++) {

		printf("%d * %d = %d \n", x, i, x * i);

	}

}



int main() {

	// 변수 선언 

	int dan;



	// 출력할 단 입력 

	printf("출력할 단을 2단~9단 사이의 값을 선택하세요!!!");

	scanf("%d", &dan);



	// 구구단 출력 

	gugudan(dan);



	return 0;

}





// 대.소문자 변환 

#include<stdio.h> 



int main() {

	// 변수 선언 

	char str[100];

	int i;

	int diff;



	// 문장 입력 

	printf("문자열을 입력(100자 이내) : ");

	gets(str);



	// 대.소문자 변환 후 출력 

	diff = 'a' - 'A';



	for (i = 0; i < 100; i++) {

		if (str[i] >= 'A' && str[i] <= 'Z')

			str[i] = str[i] + diff;

		else if (str[i] >= 'a' && str[i] <= 'z')

			str[i] = str[i] - diff;

		else

			str[i] = str[i];

	}



	printf("변환된 결과 ==> %s ", str);



	return 0;

}



// 대.소문자 변환(함수 형태) 

#include<stdio.h> 



void str_conv(char* pt) {

	int i;

	int diff = 'a' - 'A';



	for (i = 0; i < 100; i++) {

		if (pt[i] >= 'A' && pt[i] <= 'Z')

			pt[i] = pt[i] + diff;

		else if (pt[i] >= 'a' && pt[i] <= 'z')

			pt[i] = pt[i] - diff;

		else

			pt[i] = pt[i];

	}



	printf("변환된 결과 ==> %s ", pt);

}

// 대.소문자 변화 

int main() {

	// 변수 선언 

	char str[100];

	// 문장 입력 

	printf("문자열을 입력(100자 이내) : ");

	gets(str);



	// 대.소문자 변환 후 출력 

	str_conv(str);



	return 0;

}





// 로또 자동 추첨 



#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h> 

#include<stdlib.h> 

#include<time.h> 



void lotto() {

	int i, j;

	int val[6];

	// 초기 로또번호 출력 

	srand(time(NULL)); // 난수 시드 초기화 

	for (i = 0; i < 6; i++) {

		val[i] = rand() % 6 + 1;

	}

	// 중복 번호 검증 

	for (i = 0; i < 6; i++) {

		val[i] = rand() % 45 + 1;

		if (i != 0) {

			for (j = i; j >= 0; j--) {

				if (i != j) {

					if (val[i] != val[j])

						continue;

					else {

						val[i] = rand() % 45 + 1;

						j = i; // 처음부터 다시 중복 비교 

					}

				}

			}

		}

		printf("%5d", val[i]);

	}

}



int main() {



	// 난수 발생(1~45 숫자 생성 : rand() % 45 + 1) 

	printf("** 로또 추첨을 시작합니다. ** \n");

	printf("추첨된 로또 번호 ==> ");



	lotto();



	return 0;

}