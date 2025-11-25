#include <stdio.h>

#pragma warning(disable:4996)

void inputVector(double* vec);
double dotProduct(const double* v1, const double* v2);
void crossProduct(const double* v1, const double* v2, double* result);

int main(void)
{
    double vec1[3], vec2[3], cross[3];
    double dot;

    printf("=== 3차원 벡터 계산 프로그램 ===\n\n");

    printf("첫 번째 벡터 입력 (예: 1 2 3): ");
    inputVector(vec1);

    printf("두 번째 벡터 입력 (예: 4 5 6): ");
    inputVector(vec2);

    dot = dotProduct(vec1, vec2);
    crossProduct(vec1, vec2, cross);

    printf("\n=== 계산 결과 ===\n");
    printf("내적 (Dot Product)     : %.3lf\n", dot);
    printf("외적 (Cross Product)   : (%.3lf, %.3lf, %.3lf)\n", cross[0], cross[1], cross[2]);

    return 0;
}


void inputVector(double* vec)
{
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &vec[i]);
    }
}

double dotProduct(const double* v1, const double* v2)
{
    double sum = 0;
    for (int i = 0; i < 3; i++)
        sum += v1[i] * v2[i];
    return sum;
}

void crossProduct(const double* v1, const double* v2, double* result)
{
    result[0] = v1[1] * v2[2] - v1[2] * v2[1]; 
    result[1] = v1[2] * v2[0] - v1[0] * v2[2]; 
    result[2] = v1[0] * v2[1] - v1[1] * v2[0]; 
}
