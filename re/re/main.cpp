#include <stdio.h>
#pragma warning(disable:4996
// ���� �Լ�
double add(double num1, double num2) {
    return num1 + num2;
}

// ���� �Լ�
double subtract(double num1, double num2) {
    return num1 - num2;
}

// ���� �Լ�
double multiply(double num1, double num2) {
    return num1 * num2;
}

// ������ �Լ�
double divide(double num1, double num2) {
    // 0���� ������ ��츦 ó���մϴ�.
    if (num2 != 0) {
        return num1 / num2;
    }
    else {
        // ������ ��Ÿ���� ���� Ư���� ��(��: 0.0)�� ��ȯ�ϰų�, ���� �޽����� ����մϴ�.
        // ���⼭�� ���� �޽����� ����ϰ� 0.0�� ��ȯ�մϴ�.
        printf("����: 0���� ���� �� �����ϴ�.\n");
        return 0.0;
    }
}

int main() {
    double number1, number2;
    double result;

    // ����ڷκ��� �� ���ڸ� �Է¹޽��ϴ�.
    printf("ù ��° ���ڸ� �Է��ϼ���: ");
    scanf("%lf", &number1);

    printf("�� ��° ���ڸ� �Է��ϼ���: ");
    scanf("%lf", &number2);

    // 1. ���� (Addition)
    result = add(number1, number2);
    printf("\n���� ���: %.2lf + %.2lf = %.2lf\n", number1, number2, result);

    // 2. ���� (Subtraction)
    result = subtract(number1, number2);
    printf("���� ���: %.2lf - %.2lf = %.2lf\n", number1, number2, result);

    // 3. ���� (Multiplication)
    result = multiply(number1, number2);
    printf("���� ���: %.2lf * %.2lf = %.2lf\n", number1, number2, result);

    // 4. ������ (Division)
    result = divide(number1, number2);
    // 0���� ���� ��찡 �ƴ� ��쿡�� ����� ����մϴ�.
    if (number2 != 0) {
        printf("������ ���: %.2lf / %.2lf = %.2lf\n", number1, number2, result);
    }

    return 0;
}