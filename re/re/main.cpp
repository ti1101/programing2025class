#include <stdio.h>
#pragma warning(disable:4996
// 덧셈 함수
double add(double num1, double num2) {
    return num1 + num2;
}

// 뺄셈 함수
double subtract(double num1, double num2) {
    return num1 - num2;
}

// 곱셈 함수
double multiply(double num1, double num2) {
    return num1 * num2;
}

// 나눗셈 함수
double divide(double num1, double num2) {
    // 0으로 나누는 경우를 처리합니다.
    if (num2 != 0) {
        return num1 / num2;
    }
    else {
        // 오류를 나타내기 위해 특정한 값(예: 0.0)을 반환하거나, 오류 메시지를 출력합니다.
        // 여기서는 오류 메시지를 출력하고 0.0을 반환합니다.
        printf("오류: 0으로 나눌 수 없습니다.\n");
        return 0.0;
    }
}

int main() {
    double number1, number2;
    double result;

    // 사용자로부터 두 숫자를 입력받습니다.
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%lf", &number1);

    printf("두 번째 숫자를 입력하세요: ");
    scanf("%lf", &number2);

    // 1. 덧셈 (Addition)
    result = add(number1, number2);
    printf("\n덧셈 결과: %.2lf + %.2lf = %.2lf\n", number1, number2, result);

    // 2. 뺄셈 (Subtraction)
    result = subtract(number1, number2);
    printf("뺄셈 결과: %.2lf - %.2lf = %.2lf\n", number1, number2, result);

    // 3. 곱셈 (Multiplication)
    result = multiply(number1, number2);
    printf("곱셈 결과: %.2lf * %.2lf = %.2lf\n", number1, number2, result);

    // 4. 나눗셈 (Division)
    result = divide(number1, number2);
    // 0으로 나눈 경우가 아닌 경우에만 결과를 출력합니다.
    if (number2 != 0) {
        printf("나눗셈 결과: %.2lf / %.2lf = %.2lf\n", number1, number2, result);
    }

    return 0;
}