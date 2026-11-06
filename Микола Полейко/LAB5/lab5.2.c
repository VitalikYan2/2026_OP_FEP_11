#include <stdio.h>

int main() {
    int a, b, c, temporary;
    printf("Enter three sides of triangle: ");
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        printf("Not a number\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || b + c <= a || a + c <= b) {
        printf("Triangle does not exist\n");
        return 1;
        }

    // Класифікація за сторонами
    if (a == b && b == c) {
        printf("1. equilateral triangle\n");
    } else if (a == b || b == c || c == a) {
        printf("1. isosceles triangle\n");
    } else {
        printf("1. scalene triangle\n");
    }

    // Впорядковуємо сторони, щоб c була найбільшою
    if (a > c) { temporary = a; a = c; c = temporary; }
    if (b > c) { temporary = b; b = c; c = temporary; }

    // Класифікація за кутами
    int diff = c * c - (a * a + b * b);
    if (diff == 0) {
        printf("2. right triangle\n");
    } else if (diff < 0) {
        printf("2. acute triangle\n");
    } else {
        printf("2. obtuse triangle\n");
    }

    return 0;
}