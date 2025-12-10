#include <stdio.h>

// 구조체: 4 + 4 + 1 = 9 bytes (패딩으로 인해 보통 12 bytes)
typedef struct {
    int id;
    float score;
    char grade;
} StudentStruct;

// 공용체: 가장 큰 멤버(int/float) 크기 = 4 bytes
typedef union {
    int id;
    float score;
    char grade;
} StudentUnion;

int main() {
    printf("구조체 크기: %zu bytes\n", sizeof(StudentStruct));
    printf("공용체 크기: %zu bytes\n", sizeof(StudentUnion));

    // 공용체의 데이터 덮어쓰기 예시
    StudentUnion u;
    u.id = 101;
    printf("ID 저장 후: ID=%d\n", u.id); // 101

    u.score = 95.5f; // ID 공간 덮어씀
    printf("Score 저장 후: ID=%d (손상), Score=%.1f\n", u.id, u.score);

    return 0;
}