#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    //Використовуємо "?" для порівняння
    a > b ? printf("%d is greater than %d\n", a, b):
    a < b ? printf("%d is less than %d\n", a, b): printf("Numbers are equal\n");

    return 0;

}