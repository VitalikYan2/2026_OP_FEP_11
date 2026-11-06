#include <stdio.h>

int main(void) {
    int enteredValue;

    printf("Введіть ціле число: ");
    scanf("%d", &enteredValue);

    int *valueAddress = &enteredValue;

    printf("Значення через вказівник: %d\n", *valueAddress);
    printf("Адреса змінної: %p\n", (void *)valueAddress);

    return 0;
}