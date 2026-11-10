#include <stdio.h>

int main()
{
    // Task 1
    /*
    char s[100];
    int g = 0, p = 0;  // g - голосні, p - приголосні

    printf("Input a string: "); 
    fgets(s, 100, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c >= 'A' && c <= 'Z') //мала літера
            c = c + 32;

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            g++;
        else if (c >= 'a' && c <= 'z')
            p++;
    }

    printf("Vowels: %d\n", g);// Голосна
    printf("Consonants: %d\n", p);//Приголосна

    return 0;
    */

    // Task2
    /*

    int number = 18;
    int i = 1;
    int sum = 0;

    while (i <= 100)
    {
        if (i != number && i != 33)
            sum = sum + i;
        i++;
    }

    printf("Sum: %d\n", sum);

    return 0;
    */
    // Task3
    int n;
    float x, sum = 0, min = 0, max = 0;

    do
    {
        printf("Input N from 7 to 12: ");
        scanf("%d", &n);
    } while (n < 7 || n > 12);

    for (int i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%f", &x);

        if (i == 0)
        {
            min = x;
            max = x;
        }
        if (x < min)
            min = x;
        if (x > max)
            max = x;

        sum = sum + x;
    }

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", sum / n);
    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f\n", max);

    return 0;

}