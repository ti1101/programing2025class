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
    printf("��ȣ ���� ����(unsigned int): \t%u\n", unsigned_decimal);
    printf("�Ǽ�(float): \t%f\n", floating_point);
    printf("����(char): \t%c\n", character);

    return 0;
}