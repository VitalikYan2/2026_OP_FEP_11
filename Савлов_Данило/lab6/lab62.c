#include <stdio.h>

// Завдання 2: у циклі while обчислити суму перших 100 чисел,

int main() {
    int myNumber = 16;   
    int sum = 0;
    int i = 1;

    while (i <= 100) {
        if (i != myNumber && i != 33) {
            sum += i;
        }
        i++;
    }

    printf("Sum of the first 100 numbers except %d and 33: %d\n", myNumber, sum);

    return 0;
}
