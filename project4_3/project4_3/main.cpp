#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOTTO_SIZE 6
#define MAX_NUM 45

#pragma warning(disable:4996)

void GenRandSeed()
{
    srand((unsigned int)time(NULL));
}

void GenLottoNumbers(int* lotto)
{
    int i = 0;
    while (i < LOTTO_SIZE)
    {
        int num = rand() % MAX_NUM + 1;
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (lotto[j] == num)
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
        {
            lotto[i] = num;
            i++;
        }
    }
}

void InputUserNumbers(int* user)
{
    printf("\n당신의 로또 번호 6개를 입력하세요 (1~45):\n");
    for (int i = 0; i < LOTTO_SIZE; i++)
    {
        scanf("%d", &user[i]);
    }
}

int CompareLotto(const int* lotto, const int* user)
{
    int count = 0;

    for (int i = 0; i < LOTTO_SIZE; i++)
    {
        for (int j = 0; j < LOTTO_SIZE; j++)
        {
            if (lotto[i] == user[j])
                count++;
        }
    }
    return count;
}

void PrintRank(int matchCount)
{
    printf("\n맞춘 개수: %d개\n", matchCount);

    switch (matchCount)
    {
    case 6: printf(" 1등 당첨!!!\n"); break;
    case 5: printf(" 2등 당첨!\n"); break;
    case 4: printf(" 3등!\n"); break;
    case 3: printf(" 4등!\n"); break;
    default: printf("️ 꽝입니다… 다시 도전하세요.\n");
    }
}

int main(void)
{
    int lotto[LOTTO_SIZE];
    int user[LOTTO_SIZE];

    GenRandSeed();

    GenLottoNumbers(lotto);

    InputUserNumbers(user);

    int match = CompareLotto(lotto, user);

    printf("\n=== 컴퓨터 생성 로또 번호 ===\n");
    for (int i = 0; i < LOTTO_SIZE; i++)
        printf("%d ", lotto[i]);

    PrintRank(match);

    return 0;
}
