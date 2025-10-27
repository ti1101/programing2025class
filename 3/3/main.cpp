#include <stdio.h>

// 1부터 n까지의 합을 재귀적으로 계산하는 함수
int rec_func(int n) {
    if (n == 1)        // 종료 조건 (기저 조건)
        return 1;
    else
        return n + rec_func(n - 1);   // 재귀 호출
}

int main(void) {
    int result;

    result = rec_func(10);  // 1부터 10까지의 합
    printf("%d\n", result); // 결과 출력 (55)

    return 0;
}
