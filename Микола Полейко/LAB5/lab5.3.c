#include <stdio.h>

int main() {
    int num;
    printf("Enter three-digit number: ");
    if (scanf("%d", &num) != 1) {
        printf("Not a number");
        return 1;
    }

    if (num < 100 || num > 999) {
        printf("Number out of range");
        return 1;
    }

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    // Сотні
    switch (hundreds) {
        case 1: printf("one hundred"); break;
        case 2: printf("two hundred"); break;
        case 3: printf("three hundred"); break;
        case 4: printf("four hundred"); break;
        case 5: printf("five hundred"); break;
        case 6: printf("six hundred"); break;
        case 7: printf("seven hundred"); break;
        case 8: printf("eight hundred"); break;
        case 9: printf("nine hundred"); break;
    }

    if (tens == 1) {
        // 10-19: одиниці окремо не виводимо
        switch (units) {
            case 0: printf(" ten"); break;
            case 1: printf(" eleven"); break;
            case 2: printf(" twelve"); break;
            case 3: printf(" thirteen"); break;
            case 4: printf(" fourteen"); break;
            case 5: printf(" fifteen"); break;
            case 6: printf(" sixteen"); break;
            case 7: printf(" seventeen"); break;
            case 8: printf(" eighteen"); break;
            case 9: printf(" nineteen"); break;
        }
    } else {
        // Десятки (20-90)
        switch (tens) {
            case 2: printf(" twenty"); break;
            case 3: printf(" thirty"); break;
            case 4: printf(" forty"); break;
            case 5: printf(" fifty"); break;
            case 6: printf(" sixty"); break;
            case 7: printf(" seventy"); break;
            case 8: printf(" eighty"); break;
            case 9: printf(" ninety"); break;
        }
        // Одиниці
        switch (units) {
            case 1: printf(" one"); break;
            case 2: printf(" two"); break;
            case 3: printf(" three"); break;
            case 4: printf(" four"); break;
            case 5: printf(" five"); break;
            case 6: printf(" six"); break;
            case 7: printf(" seven"); break;
            case 8: printf(" eight"); break;
            case 9: printf(" nine"); break;
        }
    }

    printf("\n");
    return 0;
}