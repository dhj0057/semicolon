#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	

	for (int i = 1; i < 6; i++) {


		for (int j = 0; j < i; j++) {
			printf("*");

		}

		printf("\n");


	}




	for (int a = 0; a < 5; a++)
	{
		for (int b = 5; b > a; b--)

			printf("*");



		printf("\n");


	}

	





	for (int c = 0; c < 5; c++)
	{

		for (int d = 5; d > c; d--) {



			printf(" ");

		}




		for (int e = -1; e < c; e++) {


			printf("*");
		}


		printf("\n");




	}

	int rows;

	printf("피라미드의 높이를 입력하세요: ");
	scanf("%d", &rows);

	for (int i = 1; i <= rows; i++) {
		// 1. 공백 출력 (위에서 아래로 갈수록 감소)
		for (int j = 1; j <= rows - i; j++) {
			printf(" ");
		}

		// 2. 별 출력 (1, 3, 5... 홀수로 증가)
		for (int k = 1; k <= (2 * i - 1); k++) {
			printf("*");
		}

		// 3. 줄바꿈
		printf("\n");
	}


	int z = 0;
	scanf("%d", &z);


	for (int f = 0; f < z; f++)
	{
		for (int g = z; g > f; g--) {


			printf(" ");
		}

		int star = 2 * f + 1;

		for (int h = 0; star > h; h++) {


			printf("*");
		}
		printf("\n");
	}
	for (int f = z - 2; f >= 0; f--) {

		for (int g = z; g > f; g--) {
			printf(" ");
		}
		int star = 2 * f + 1;

		for (int h = 0; star > h; h++) {
			printf("*");
		}
		printf("\n");

	}
}
