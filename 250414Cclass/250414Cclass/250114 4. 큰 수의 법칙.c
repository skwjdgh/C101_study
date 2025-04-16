//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randnum[5];
//	int m, k;
//
//	for( int i = 0; i < 5 ;i++)
//	{
//		randnum[i] = rand() % 10;
//	}
//
//	
//	int max =0 ;
//	int smax =0 ;
//
//	for (int j = 0; j<5 ;j++)
//		if (randnum[j] > max)
//		{
//			smax = max;
//			max = randnum[j];
//		}
//		else if (randnum[j] > smax && randnum[j] < max)
//		{
//			smax = randnum[j];
//		}
//
//	scanf("%d %d", &m, &k);
//
//	int cals,scals;
//	cals = m % k;
//	scals = m - cals;
//
//	int result;
//
//	result = (max * scals) + (smax * cals);
//
//	printf("결과는 %d 입니다.", result);
//
//	return 0;
//}
//
//  m은 최대 연산 횟수, k는 연속된 수  m%k = a 값을 두번 째 수와 곱하고, m-a를 최대수와 곱하여 더함
