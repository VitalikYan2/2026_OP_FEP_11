#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Введіть три сторони: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Такого трикутника не існує\n");
        return 0;
    }

    /* а) за сторонами */
    if (a == b && b == c)
        printf("Рівносторонній\n");
    else if (a == b || b == c || a == c)
        printf("Рівнобедрений\n");
    else
        printf("Різносторонній\n");

    /* б) за кутами */
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        printf("Прямокутний\n");
    else if (a*a + b*b > c*c && a*a + c*c > b*b && b*b + c*c > a*a)
        printf("Гострокутний\n");
    else
        printf("Тупокутний\n");

    return 0;
}