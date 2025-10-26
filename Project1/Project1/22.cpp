#include <stdio.h>
#pragma warning(disable:4996

int main() {
    int passengers;
    double luggage, total_weight;
    const double rated_load = 600.0;
    const double person_weight = 70.0;

    printf("ž�� �ο� ��(0~3��): ");
    scanf("%d", &passengers);

    // ��ȿ�� �˻�
    if (passengers < 0 || passengers > 3) {
        printf("Invalid input\n");
        return 0;
    }

    printf("���� ����(kg): ");
    scanf("%lf", &luggage);

    if (luggage < 0) {
        printf("Invalid input\n");
        return 0;
    }

    total_weight = passengers * person_weight + luggage;

    // ���� ������ ���
    printf("%s\n", (total_weight <= rated_load) ? "OK" : "Overload");

    return 0;
}
