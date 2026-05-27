#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> 
#include <windows.h>

int main(void)
{
    int s[3] = { 0, 0, 0 };
    srand((unsigned int)time(NULL));

    while (1) {
        // 초기화 및 안내 (줄바꿈 없이 한 줄에서 시작)
        printf("\r[Enter]를 누르면 시작합니다!               ");
        while (!_kbhit() || _getch() != '\r');

        for (int i = 0; i < 3; i++) {
            // 해당 칸이 멈출 때까지 무한 회전
            while (1) {
                if (_kbhit()) {
                    if (_getch() == '\r') break; // 엔터 치면 다음 칸으로
                }

                s[i] = rand() % 10;
                // \r로 줄 맨 앞으로 가서 현재 상태 덮어쓰기
                printf("\r   [ %d ] [ %d ] [ %d ]  (%d번 칸 도는 중...)     ", s[0], s[1], s[2], i + 1);
                fflush(stdout);
                Sleep(30);
            }
        }

        // 최종 결과 출력 및 판정
        if (s[0] == 7 && s[1] == 7 && s[2] == 7) printf("★777 잭팟!★             ");
        else if (s[0] == s[1] && s[1] == s[2]) printf("트리플!                 ");
        else printf("꽝! (Enter: 재도전)             ");

        fflush(stdout);
        // 결과 확인 후 다시 시작하기 위해 대기
        while (!_kbhit() || _getch() != '\r');
    }

    return 0;
}