#include <stdio.h>

// �Լ� ����
double centi_to_meter(int cm);  // cm�� m�� ��ȯ�ϴ� �Լ� ���� ����

int main(void)
{
    double res;  // ��ȯ�� ���� ������ ����

    res = centi_to_meter(187);  // �Լ� ȣ�� (187cm �Է�)
    printf("%.2fm\n", res);     // ��� ���

    return 0;
}

// �Լ� ����
double centi_to_meter(int cm)
{
    double meter;        // �ʿ��� ���� ����
    meter = cm / 100.0;  // cm�� m�� ȯ��
    return meter;        // ȯ��� �� ��ȯ
}
