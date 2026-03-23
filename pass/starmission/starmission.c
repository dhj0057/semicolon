#include <stdio.h>
int main() {
	for (int i = 1; i < 6; i++)

	{
		for (int j = 0; j < i; j++)


			printf("*");


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

	

	
	for (int f = 0; f < 5; f++) 
	{
		for (int g = 4; g > f; g--) {


			printf(" ");
		}

		int star = 2 * f + 1;

		for (int h = 0; star > h; h++) {
			
			
			printf("*");
		}
		
		for (int g = 4; g > f; g--) {


			printf(" ");
		}
		
		
		
		printf("\n");





















	}
}
















