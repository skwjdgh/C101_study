//구구단을 파일에 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*void main()
{
	char s[120];
	int i, k;
	FILE* wfp;

	wfp = fopen("C:\\Users\\AISW\\Desktop\\C언어 실습\\250407Cclass\\Project2\\gugu.txt", "w");

	for (i = 2;i <= 9;i++)
		fprintf(wfp, "# 제%d 단 ", i);
	fprintf(wfp, "\n\n");

	for (i = 2;i <= 9;i++)
	{
		for (k = 1; k <= 9; k++)
		{
			fprintf(wfp, "%2d X %d = %2d", i, k, i * k);
		}
	fprintf(wfp, "\n\n");
	}	
}*/


// 파일에서 읽어온 문자열을 파일에 반대 순서로 출력

int main()
{
	int i;
	char bf[20];

	FILE* rfp;
	FILE* wfp;

	rfp = fopen("C:\\Users\\AISW\\Desktop\\C언어 실습\\250407Cclass\\Project2\\gugu.txt", "r");
	wfp = fopen("C:\\Users\\AISW\\Desktop\\C언어 실습\\250407Cclass\\Project2\\out 1.txt", "w");

	while (1)
	{
		fgets(bf, 20, rfp);

		for (i = strlen(bf) - 2; i >= 0; i--)
		{
			printf("%c", bf[i]);

		}
		printf("\n");

		if (feof(rfp)) // file end of file
			break;
	
	}

	fclose(rfp);
	fclose(wfp);

	return 0;
}
