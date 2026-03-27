#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	
int main(void) {

	int m = 0;
	int n = 0;
	
	printf("마음에드는 정수를 입력하세용\n");
	scanf("%d", &n);

	for (m = 1; m <= n; m++)
	{
		printf("%d" , m);

	}
	printf("\n");
	if (n > 5) {
		printf("%d은 5보다 큰수용\n",n);

	}
	else if (n == 5) {
		printf("%d은 5와 같은수용\n",n);

	}
	else {
		printf("%d은 5보다 작은수용\n",n);

	}
	return 0;






}
