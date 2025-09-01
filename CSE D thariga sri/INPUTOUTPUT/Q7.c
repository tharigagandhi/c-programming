#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Hexadecimal (lowercase): %x\n", num);
    printf("Hexadecimal (UPPERCASE): %X\n", num);

    return 0;
}
