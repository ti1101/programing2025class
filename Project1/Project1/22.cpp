#include <stdio.h>
#pragma warning(disable:4996

int main() {
    int passengers;
    double luggage, total_weight;
    const double rated_load = 600.0;
    const double person_weight = 70.0;

    printf("탑승 인원 수(0~3명): ");
    scanf("%d", &passengers);

    // 유효성 검사
    if (passengers < 0 || passengers > 3) {
        printf("Invalid input\n");
        return 0;
    }

    printf("짐의 무게(kg): ");
    scanf("%lf", &luggage);

    if (luggage < 0) {
        printf("Invalid input\n");
        return 0;
    }

    total_weight = passengers * person_weight + luggage;

    // 조건 연산자 사용
    printf("%s\n", (total_weight <= rated_load) ? "OK" : "Overload");

    return 0;
}
