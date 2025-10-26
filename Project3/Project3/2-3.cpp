#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#pragma warning(disable:4996) 

int main() {
    double theta, ms = 0.5, mk = 0.4, g = 9.81;
    double rad, fs_max, fx, a;

    printf("경사각 θ(도 단위): ");
    scanf("%lf", &theta);

    if (theta < 0 || theta > 90) {
        printf("Invalid input\n");
        return 0;
    }

    rad = theta * M_PI / 180.0;

    fx = sin(rad);
    fs_max = ms * cos(rad);

    if (fx <= fs_max)
        printf("정지 상태 유지 (미끄러지지 않음)\n");
    else {
        a = g * (sin(rad) - mk * cos(rad));
        printf("미끄러짐 발생: 가속도 = %.3f m/s² (아래 방향)\n", a);
    }

    return 0;
}
