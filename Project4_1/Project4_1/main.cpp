
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 100
#define MAX_SELECT 10

#pragma warning(disable:4996)

void GenRandArray(int* arr, int size, int min, int max);
int ExtractRange(const int* src, int size, int* dest, int minRange, int maxRange);
double CalcSum(const int* arr, int size);
double CalcVariance(const int* arr, int size, double avg);

int main(void)
{
    int arr[SIZE];
    int selected[MAX_SELECT];
    int min, max;

    srand((unsigned int)time(NULL));

    GenRandArray(arr, SIZE, 1, 100);

    printf("[100개의 랜덤 숫자 생성 완료]\n\n");

    printf("범위 최소값 입력: ");
    scanf("%d", &min);
    printf("범위 최대값 입력: ");
    scanf("%d", &max);

    int count = ExtractRange(arr, SIZE, selected, min, max);

    if (count == 0)
    {
        printf("\n해당 범위 내 값이 존재하지 않습니다.\n");
        return 0;
    }

    printf("\n=== 추출된 값 (%d개) ===\n", count);
    for (int i = 0; i < count; i++)
        printf("%d ", selected[i]);
    printf("\n");

    double sum = CalcSum(selected, count);
    double avg = sum / count;
    double variance = CalcVariance(selected, count, avg);
    double stdev = sqrt(variance);

    printf("\n===== 결과 =====\n");
    printf("총합: %.2lf\n", sum);
    printf("평균: %.2lf\n", avg);
    printf("분산: %.2lf\n", variance);
    printf("표준편차: %.2lf\n", stdev);

    return 0;
}

void GenRandArray(int* arr, int size, int min, int max)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand() % (max - min + 1) + min;
}

int ExtractRange(const int* src, int size, int* dest, int minRange, int maxRange)
{
    int count = 0;
    for (int i = 0; i < size && count < MAX_SELECT; i++)
    {
        if (src[i] >= minRange && src[i] <= maxRange)
        {
            dest[count] = src[i];
            count++;
        }
    }
    return count;
}

double CalcSum(const int* arr, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

double CalcVariance(const int* arr, int size, double avg)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += pow(arr[i] - avg, 2);
    return sum / size;
}