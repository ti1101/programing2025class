#include <stdio.h>

// 1���� n������ ���� ��������� ����ϴ� �Լ�
int rec_func(int n) {
    if (n == 1)        // ���� ���� (���� ����)
        return 1;
    else
        return n + rec_func(n - 1);   // ��� ȣ��
}

int main(void) {
    int result;

    result = rec_func(10);  // 1���� 10������ ��
    printf("%d\n", result); // ��� ��� (55)

    return 0;
}
