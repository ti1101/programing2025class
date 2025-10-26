#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    char door;
    double temp;
    int time;

    printf("문 상태 입력 (O=열림, C=닫힘): ");
    scanf(" %c", &door);
    printf("온도 입력(°C): ");
    scanf("%lf", &temp);
    printf("경과 시간 입력(초): ");
    scanf("%d", &time);

    // 입력 유효성 검사
    if ((door != 'O' && door != 'C') || time < 0) {
        printf("Invalid input\n");
        return 0;
    }

    if (door == 'C') {
        if (temp >= 2.0 && temp <= 8.0)
            printf("Normal\n");
        else
            printf("%s\n", (time <= 30) ? "Warning" : "Critical");
    }
    else if (door == 'O') {
        if (time >= 60 && (temp <= 2.0 || temp >= 8.0))
            printf("Critical\n");
        else
            printf("Normal\n");
    }

    return 0;
}
