//#define _CRT_SECURE_NO_WARNINGS
//#include< stdio.h>
//#include<malloc.h>

/*
int main()
{
	int aa[3];
	int* p; //정수형 포인터 변수를 선언한다.
	int i, hap = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d 번째 숫자 : ", i + 1);
		scanf("%d", &aa[i]);

	}
	p = aa;

	for (i = 0;i < 3;i++)
		hap = hap + *(p + i);

	printf("입력 숫자의 합 => %d\n", hap);
}
*/

/*int main()
{ 

	int aa[10000];
	int* p;
	int i,hap = 0;
	int cnt;

	printf("입력할 개수는? : ");
	scanf("%d", &cnt);

	for (i = 0; i < cnt; i++)
	{
		printf("%d 번째 숫자 : ", i + 1);
		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < cnt; i++)
		hap = hap + *(p + i);

	printf("입력 숫자의 합 ==> %d\n", hap);


	return 0;
}*/

/*int main()
{
	int* p;
	int i, hap = 0;
	int cnt;

	printf("입력할 개수는? : ");
	scanf("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);

	for (i = 0;i < cnt;i++)
	{
		printf("%d 번째 숫자 : ", i + 1);
		scanf("%d", &p[i]); //p+i

	}

	for (i = 0; i < cnt; i++)
	{
		hap = hap + *(p + i);
	}

	printf("입력 숫자 함 ==> %d\n", hap);
	free(p); // 메모리 해제, 사용 종료를 위해 무조건 사용!! 포인터 변수에 널값을 넣는다는 의미 



	return 0;
}*/

// calloc() : malloc()과 동일하지만 값을 0으로 초기화 시킴!!

/*int main()
{
	int* p;
	int i, hap = 0;
	int cnt = 0;
	int data;

	p = (int*)malloc(sizeof(int) * 1);
	printf(" 1 번째 숫자 : ");
	scanf("%d", &p[0]);
	cnt++;

	for (i = 2;;i++)
	{
		printf(" %d 번째 숫자 : ", i);
		scanf("%d", &data);

		if (data != 0)
			p = (int*)realloc(p, sizeof(int) * i);
		else
			break;

		p[i - 1] = data;
		cnt++;

	}

	for (i = 0; i < cnt;i++)
	{
		hap = hap + i;
		
	}
	printf("입력 숫자 함 ==>%d\n", hap);

	free(p);
	return 0;
}*/