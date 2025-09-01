#include <stdio.h>

int main() {
    int num;
    printf("Enter an octal number: ");
    scanf("%o", &num);
    printf("The integer (decimal) value is: %d\n", num);

    return 0;
}
