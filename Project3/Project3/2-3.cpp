#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#pragma warning(disable:4996) 

int main() {
    double theta, ms = 0.5, mk = 0.4, g = 9.81;
    double rad, fs_max, fx, a;

    printf("��簢 ��(�� ����): ");
    scanf("%lf", &theta);

    if (theta < 0 || theta > 90) {
        printf("Invalid input\n");
        return 0;
    }

    rad = theta * M_PI / 180.0;

    fx = sin(rad);
    fs_max = ms * cos(rad);

    if (fx <= fs_max)
        printf("���� ���� ���� (�̲������� ����)\n");
    else {
        a = g * (sin(rad) - mk * cos(rad));
        printf("�̲����� �߻�: ���ӵ� = %.3f m/s�� (�Ʒ� ����)\n", a);
    }

    return 0;
}
