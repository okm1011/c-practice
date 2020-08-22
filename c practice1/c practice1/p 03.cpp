#define _CRT_SECURE_NO_WARNINGS     // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

int main(void)
{
	char grade = 0;
	scanf_s("%c", &grade);

	switch (grade) {
	case 'A' :
		printf("good");
		break;

	case 'B':
		printf("bad");
		break;

	}

	}













	




