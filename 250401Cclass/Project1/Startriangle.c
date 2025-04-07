#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int point;
    char tri[101]; // 별을 저장할 문자열
    int a, i, range;

    printf("꼭지점의 위치를 입력하세요 (0 ~ 100): ");
    scanf("%d", &point);

    // 입력값 검증
    if (point < 0 || point > 100) {
        printf("잘못된 입력입니다. 0 ~ 100 사이의 값을 입력하세요.\n");
        return 1;
    }

    // 삼각형 크기 결정
    if (point < 50) {
        range = point;
    }
    else {
        range = 100 - point;
    }

    // 문자열 공백으로 초기화
    for (a = 0; a < 101; a++) {
        tri[a] = ' ';
    }
    tri[100] = '\0'; // 문자열 끝 지정

    // 꼭지점 출력
    tri[point] = '*';
    puts(tri);

    int start = point - range+1; // 마지막 줄 시작값
    int end = point + range+1;   // 마지막 줄 끝값

    // 삼각형 본체 출력
    for (i = 1; i < range-1; i++) {
        // 한 줄 출력 전에 다시 공백으로 초기화
        for (a = 0; a < 101; a++) {
            tri[a] = ' ';
        }
        tri[point - i] = '*';
        tri[point + i] = '*';
        tri[100] = '\0';
        puts(tri);
    }

    // 삼각형 밑면 출력
    for (a = 0; a < 101; a++) {
        tri[a] = ' ';
    }
    for (a = start; a <= end +1 ; a++) {
        tri[a] = '*';
    }
    tri[100] = '\0';
    puts(tri);

    return 0;
}