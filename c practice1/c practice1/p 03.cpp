#define _CRT_SECURE_NO_WARNINGS     // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a,&b);

	int arr[3][4];
	

	
		for (int j = 0; j < a; j++){
			
			for (int i = 0; i < b; i++)
			{
				scanf_s("%d", &arr[j][i]);

			}
		}

		for (int j = 0; j < a; j++) {
			int sum = 0;
			for (int i = 0; i < b; i++)
			{
				sum += arr[j][i];


			}
			
			printf("%d\n",sum);

		}
		
		


	}













	




