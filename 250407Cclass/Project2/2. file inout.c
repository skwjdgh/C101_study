#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	char s[20];
	FILE* rfp; //파일 포인터

	rfp = fopen("C:\\Users\\AISW\\Desktop\\C언어 실습\\250407Cclass\\Project2\\data1.txt", "r"); //읽기모드 오픈

	fgets(s, 20, rfp); //문자열을 읽어서 

	printf("파일에서 읽은 문자열 : ");
	puts(s);

	fclose(rfp);

}

*/

/*void main()
{
	char str[200];
	FILE* rfp;

	rfp = fopen("C:\\windows\\win.ini", "r");

	for (;;)
	{
		fgets(str, 200, rfp);
		if (feof(rfp))
			break;
		printf("%s", str);
	}
	
	fclose(rfp);
	
}*/

/*void main()
{
	FILE* rfp;
	int hap = 0;
	int in, i;

	rfp = fopen("C:\\Users\\AISW\\Desktop\\C언어 실습\\250407Cclass\\Project2\\data1.txt", "r");

	for (i = 0;i < 5;i++) {
		fscanf(rfp, "%d", &in);
		hap = hap + in;
	}
	printf("합계 ==> %d\n", hap);
	fclose(rfp);
}*/

/*void main()
//{
	/*char s[20];
	//FILE* wfp;


	//wfp = fopen("C:\\Users\\AISW\\Desktop\\C언어 실습\\250407Cclass\\Project2\\data1.txt", "w");


	//printf("문자열을 입력(최대 19자) :");
	//gets(s);

	//fputs(s, wfp);
	//fclose(wfp);
//}*/

//void main()
//{
	//FILE* wfp;
	//int hap = 0;
	//int in, i;

	//wfp = fopen("c:\\temp \\ data7.txt", "w");

	//for (i = 0;i < 5;i++)
	//{
	//	printf("숫자 %d : ", i + 1);
		//scanf("%d", &in);
		//hap = hap + in;

	//}

	//fprintf(wfp, "합계 ==> :%d\n", hap);

	//fclose(wfp);
//}