#include <stdio.h>

// 함수 선언
double centi_to_meter(int cm);  // cm를 m로 변환하는 함수 원형 선언

int main(void)
{
    double res;  // 변환된 값을 저장할 변수

    res = centi_to_meter(187);  // 함수 호출 (187cm 입력)
    printf("%.2fm\n", res);     // 결과 출력

    return 0;
}

// 함수 정의
double centi_to_meter(int cm)
{
    double meter;        // 필요한 변수 선언
    meter = cm / 100.0;  // cm를 m로 환산
    return meter;        // 환산된 값 반환
}
