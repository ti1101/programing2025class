#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

#define SIZE 10        
#define MIN_VAL -100.0 
#define MAX_VAL 100.0  

// 배열 출력 함수
// arr : 출력할 배열
// size : 배열 크기
void PrintArray(double* arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%.1f ", arr[i]);; 
    }
    printf("\n");
}

// 배열 정렬 함수
// arr : 정렬할 배열
// size : 배열 크기
// ascending : 1  오름차순, 0  내림차순
void CalcSortArray(double* arr, int size, int ascending) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - 1 - i; j++) 
        {

            // ascending 값에 따라 오름차/내림차 비교 방식 결정
            int cond = ascending ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]);

            // 조건 맞으면 두 값 교환
            if (cond) 
            {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    double array[SIZE]; // 배열 선언

    srand(1);

    // 배열에 랜덤 값 생성하여 저장
    for (int i = 0; i < SIZE; i++) 
    {
        double r = (double)rand() / RAND_MAX;        // 0~1 사이 난수 생성
        array[i] = MIN_VAL + r * (MAX_VAL - MIN_VAL); // -100 ~ 100 범위로 변환
    }

    // 초기 배열 출력
    printf("=== 랜덤 생성된 배열 ===\n");
    PrintArray(array, SIZE);

    int order;
    // 정렬 방식 입력받기
    printf("정렬 방식 선택 (1: 오름차순, 0: 내림차순): ");
    scanf("%d", &order);

    // 사용자가 지정한 정렬 방식으로 배열 정렬
    CalcSortArray(array, SIZE, order);

    // 정렬 결과 출력
    if (order)
        printf("\n=== 오름차순 정렬 결과 ===\n");
    else
        printf("\n=== 내림차순 정렬 결과 ===\n");

    PrintArray(array, SIZE);

    return 0;
}
