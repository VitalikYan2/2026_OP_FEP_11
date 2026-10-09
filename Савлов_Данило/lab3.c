#include <stdio.h>

int main(void)
{
    // 1. Формати виводу цілочисельних значений
    int valInt = 124;
    printf("Decimal: %d\n", valInt);
    printf("Binary: %b\n", valInt);
    printf("Octal: %o\n", valInt);
    printf("Hexadecimal: %x\n", valInt);

    // 2. Представлення чисел із плаваючою крапкою
    float valFloat = 92.1973f;
    printf("Floating-point: %f\n", valFloat);
    printf("Exponential: %e\n", valFloat);
    printf("Auto: %g\n", valFloat);

    // 3. Вивід символу, рядка та адреси в пам'яті
    char ch = 'A';
    char textBuf[100] = "D";
    printf("Symbol: %c\n", ch);
    printf("String: %s\n", textBuf);
    printf("Address: %p\n\n", (void *)&ch);

    // 4. Введення даних для 3 учасників та виведення таблиці
    char surnames[3][100];
    char initials[3][100];
    char emails[3][100];
    char colors[3][100];

    for (int i = 0; i < 3; i++)
    {
        printf("Введіть прізвище учасника %d: ", i + 1);
        scanf("%99s", surnames[i]);
        printf("Введіть ініціали учасника %d: ", i + 1);
        scanf("%99s", initials[i]);
        printf("Введіть електронну пошту учасника %d: ", i + 1);
        scanf("%99s", emails[i]);
        printf("Введіть улюблений колір учасника %d: ", i + 1);
        scanf("%99s", colors[i]);
        printf("\n");
    }

    // Заголовок таблиці та розділова лінія
    printf("%-3s %-15s %-10s %-30s %-10s\n", "№", "Прізвище", "Ініціали", "Ел.пошта", "Колір");
    printf("-------------------------------------------------------------------\n");

    // Виведення списку учасників
    for (int i = 0; i < 3; i++)
    {
        printf("%-3d %-15s %-10s %-30s %-10s\n", i + 1, surnames[i], initials[i], emails[i], colors[i]);
    }

    return 0;
}