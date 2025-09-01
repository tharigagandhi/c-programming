#include <stdio.h>

int main() {
    int asciiValue;
    char character;
    printf("Enter an ASCII value: ");
    scanf("%d", &asciiValue);
    character = (char)asciiValue;
    printf("The character for ASCII value %d is '%c'\n", asciiValue, character);

    return 0;
}
