#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
int main(void) {



	int answer, guess;                                     //추측값  정답값 형선언
	int count = 0;                                         //1씩 계속 늘어나면 편하니까 이걸로 

	srand((unsigned int)time(NULL));                 //랜덤을 빈시간값으로 현재계속변하고있는것을이용하여 랜덤구현 

	answer = rand() % 100 + 1;
	printf("========= UP & DOWN GAME ==========\n");
	printf("=============START===============\n");
	while (1) {                                      //무한반복문 으로 맞출때까지 반복사용
		printf("숫자를 입력하시오");
		if (scanf("%d", &guess) != 1) {					//입력숫자가 int값이아닐시대비
			printf("숫자를 넣어라 닝겐\n");
			while (getchar() != '\n');                  //입력이 숫자가 아닐시 대비 (쓰레기값이 남아서 다음 입력값에 입력되어 프로그램 뻗음방지
			continue;                                   //만약 숫자가아닐시 버퍼에남은 문자가 enter가아닐시 반복하라는뜻 안에있는 숫자가아닌 문자를소비하라는뜻
		}
		count += 1;
		if (guess > answer) {
			printf("DOWN!\n");
		}
		else if (guess < answer) {
			printf("UP!\n");
		}
		else {
			printf("GOOD! THAT'S THE ANSWER!");
			printf("%d 번만의 정답이다!", count);
			break;
		}

	}
}