#include <stdio.h>

int main() 
{
    printf("=== Char/String & Escapes ===\n");

    char myChar = 'A';
    printf("Char : %c, code: %d\n", myChar, myChar);

    const char* message = "First line\n    Indented second line\nThird line";
    printf("Message:\n%s\n", message);

    printf("Quotes: \"double quotes\" and 'single quotes'\n");

    printf("Backslash: \\\n");

    float average = 87.35f;
    printf("Average: [%8.2f]\n", average);

    return 0;
}
