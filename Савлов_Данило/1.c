#include <stdio.h>

// Виводить двійкове представлення 32-бітного числа
void showBits(unsigned int value) {
    for (int position = 31; position >= 0; position--) {
        printf("%u", (value >> position) & 1u);
    }
    printf("\n");
}

int main(void) {
    int first = 8;
    int second = 4;

    printf("Арифметичні операції:\n");
    printf("first = %d, second = %d\n", first, second);
    printf("first + second = %d\n", first + second);
    printf("first - second = %d\n", first - second);
    printf("first * second = %d\n", first * second);
    printf("first / second = %d\n", first / second);
    printf("first %% second = %d\n", first % second);

    printf("\nОперації порівняння:\n");
    printf("first > second = %d\n", first > second);
    printf("first < second = %d\n", first < second);
    printf("first == second = %d\n", first == second);
    printf("first != second = %d\n", first != second);
    printf("first >= second = %d\n", first >= second);
    printf("first <= second = %d\n", first <= second);

    printf("\nЛогічні операції:\n");
    printf("(first > 0) && (second > 0) = %d\n",
           (first > 0) && (second > 0));
    printf("(first < 0) || (second > 0) = %d\n",
           (first < 0) || (second > 0));
    printf("!(first == second) = %d\n", !(first == second));

    printf("\nПобітові операції:\n");
    printf("first у двійковому вигляді: ");
    showBits((unsigned int)first);

    printf("second у двійковому вигляді: ");
    showBits((unsigned int)second);

    printf("first & second = %d; двійковий вигляд: ", first & second);
    showBits((unsigned int)(first & second));

    printf("first | second = %d; двійковий вигляд: ", first | second);
    showBits((unsigned int)(first | second));

    printf("first ^ second = %d; двійковий вигляд: ", first ^ second);
    showBits((unsigned int)(first ^ second));

    printf("~first = %d; двійковий вигляд: ", ~first);
    showBits((unsigned int)~first);

    printf("first << 1 = %d; двійковий вигляд: ", first << 1);
    showBits((unsigned int)(first << 1));

    printf("first >> 1 = %d; двійковий вигляд: ", first >> 1);
    showBits((unsigned int)(first >> 1));

    return 0;
}