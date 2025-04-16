//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//void main()
//{
//	int N = 27;
//	int K = 5;
//	int count1 = 0, count2 = 0;
//	int count = 0;
//
//
//	while (N > 1)
//	{
//		if (N % K == 0)
//		{
//			N = N / K;
//			count1 = count1 + 1;
//		}
//		else
//		{
//			N = N - 1;
//			count2 = count2 + 1;
//		}
//		count = count1 + count2;
//	}
//	printf("1번 과정의 반복한 횟수: %d\n", count1);
//	printf("2번 과정의 반복한 횟수: %d\n", count2);
//	printf("전체 횟수: %d", count);
//
//}