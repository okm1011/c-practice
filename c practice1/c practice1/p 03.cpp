#define _CRT_SECURE_NO_WARNINGS     // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // strcpy �Լ��� ����� ��� ����

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













	




