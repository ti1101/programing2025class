#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    char door;
    double temp;
    int time;

    printf("�� ���� �Է� (O=����, C=����): ");
    scanf(" %c", &door);
    printf("�µ� �Է�(��C): ");
    scanf("%lf", &temp);
    printf("��� �ð� �Է�(��): ");
    scanf("%d", &time);

    // �Է� ��ȿ�� �˻�
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
