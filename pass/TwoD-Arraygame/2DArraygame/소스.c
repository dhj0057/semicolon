#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define SIZE 20

void printMap(char map[SIZE][SIZE])
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("  %c", map[i][j]);
        }
        printf("\n");
    }
}

void setRandomPosition(char map[SIZE][SIZE], int* y, int* x)
{
    do
    {
        *y = rand() % (SIZE - 2) + 1;
        *x = rand() % (SIZE - 2) + 1;
    } while (map[*y][*x] != ' ');
}

int main(void)
{
    char map[SIZE][SIZE] = {
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','P',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
    };

    int playerY = 1;
    int playerX = 1;

    int goalY;
    int goalX;

    int bombY[8];
    int bombX[8];
    int bombCount;

    int gameOver = 0;
    char input;
    int i;
    int turn = 0;

    srand((unsigned int)time(NULL));

    /*
        목표 지점 G 랜덤 생성
    */
    setRandomPosition(map, &goalY, &goalX);
    map[goalY][goalX] = 'G';

    /*
        폭탄 개수 랜덤 생성
        rand() % 5 는 0~4
        + 4 를 하면 4~8
    */
    bombCount = rand() % 5 + 4;

    /*
        폭탄 위치 랜덤 생성
    */
    for (i = 0; i < bombCount; i++)
    {
        setRandomPosition(map, &bombY[i], &bombX[i]);
        map[bombY[i]][bombX[i]] = 'B';
    }

    while (gameOver == 0)
    {
        system("cls");

        printf("========================== 폭탄 피하기 게임 =====================================\n");
        printf("W: 위, A: 왼쪽, S: 아래, D: 오른쪽, Q: 종료\n");
        printf("목표: 폭탄을 피해 G 지점까지 이동하세요.\n");
        printf("폭탄은 플레이어가 움직일 때마다 랜덤으로 이동합니다.\n");
        printf("폭탄 개수: %d개\n", bombCount);
        printf("이동 횟수: %d\n\n", turn);

        printMap(map);

        printf("\n이동 입력: ");
        input = _getch();
        printf("%c\n", input);

        if (input == 'q' || input == 'Q')
        {
            printf("게임을 종료합니다.\n");
            break;
        }

        int nextY = playerY;
        int nextX = playerX;

        if (input == 'w' || input == 'W')
        {
            nextY--;
        }
        else if (input == 's' || input == 'S')
        {
            nextY++;
        }
        else if (input == 'a' || input == 'A')
        {
            nextX--;
        }
        else if (input == 'd' || input == 'D')
        {
            nextX++;
        }
        else
        {
            printf("잘못된 입력입니다.\n");
            Sleep(700);
            continue;
        }

        if (map[nextY][nextX] == '#')
        {
            printf("벽으로는 이동할 수 없습니다.\n");
            Sleep(700);
            continue;
        }
        else if (map[nextY][nextX] == 'B')
        {
            printf("폭탄을 밟았습니다. 게임 실패!\n");
            gameOver = 1;
            break;
        }
        else if (map[nextY][nextX] == 'G')
        {
            map[playerY][playerX] = ' ';

            playerY = nextY;
            playerX = nextX;

            map[playerY][playerX] = 'P';

            system("cls");

            printf("========================== 폭탄 피하기 게임 =====================================\n");
            printf("이동 횟수: %d\n\n", turn + 1);

            printMap(map);

            printf("\n목표 지점에 도착했습니다. 게임 성공!\n");
            gameOver = 1;
            break;
        }
        else
        {
            map[playerY][playerX] = ' ';

            playerY = nextY;
            playerX = nextX;

            map[playerY][playerX] = 'P';

            turn++;
        }

        /*
            폭탄 랜덤 이동
        */

        for (i = 0; i < bombCount; i++)
        {
            map[bombY[i]][bombX[i]] = ' ';
        }

        for (i = 0; i < bombCount; i++)
        {
            int direction = rand() % 4;

            int nextBombY = bombY[i];
            int nextBombX = bombX[i];

            if (direction == 0)
            {
                nextBombY--;
            }
            else if (direction == 1)
            {
                nextBombY++;
            }
            else if (direction == 2)
            {
                nextBombX--;
            }
            else if (direction == 3)
            {
                nextBombX++;
            }

            /*
                폭탄은 벽과 목표 지점으로 이동하지 못하게 합니다.
                플레이어 쪽으로 이동하는 것은 허용합니다.
            */
            if (map[nextBombY][nextBombX] != '#' &&
                map[nextBombY][nextBombX] != 'G')
            {
                bombY[i] = nextBombY;
                bombX[i] = nextBombX;
            }
        }

        for (i = 0; i < bombCount; i++)
        {
            if (bombY[i] == playerY && bombX[i] == playerX)
            {
                map[playerY][playerX] = 'B';

                system("cls");

                printf("========================== 폭탄 피하기 게임 =====================================\n");
                printf("폭탄 개수: %d개\n", bombCount);
                printf("이동 횟수: %d\n\n", turn);

                printMap(map);

                printf("\n폭탄이 플레이어에게 닿았습니다. 게임 실패!\n");
                gameOver = 1;
                break;
            }

            map[bombY[i]][bombX[i]] = 'B';
        }

        map[goalY][goalX] = 'G';
        map[playerY][playerX] = 'P';
    }

    printf("\n게임이 종료되었습니다.\n");

    return 0;
}