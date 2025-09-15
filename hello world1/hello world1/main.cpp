#include <stdio.h>

int main(void) {
    char string[] = "Taein";
    char string1[] = "T";
    int decimal = 21;
    unsigned int unsigned_decimal = 67890;
    float floating_point = 3.141592;
    char character = 'A';
    

    printf("Name : \t%s\n", string);
    printf("Initial : \t%s\n", string1);
    printf("Age : \t%d\n", decimal);
    printf("부호 없는 정수(unsigned int): \t%u\n", unsigned_decimal);
    printf("실수(float): \t%f\n", floating_point);
    printf("문자(char): \t%c\n", character);

    return 0;
}