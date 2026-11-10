#include <stdio.h>

// Завдання 3: задати ціле N з [7; 12], у циклі ввести N дійсних чисел,
// вивести суму, середнє арифметичне, мінімальне і максимальне значення.
int main() {
    int n = 0;
    float num = 0, sum = 0, min = 0, max = 0;

    // do-while: гарантує хоча б один запит і перевіряє діапазон
    do {
        printf("Enter N from 7 to 12: ");
        scanf("%d", &n);
    } while (n < 7 || n > 12);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        sum += num;

        if (i == 1) {
            min = num;
            max = num;
        } else {
            if (num > max) max = num;
            if (num < min) min = num;
        }
    }

    float average = sum / n;

    printf("Sum: %g\n", sum);
    printf("Average: %g\n", average);
    printf("Min: %g\n", min);
    printf("Max: %g\n", max);

    return 0;
}
