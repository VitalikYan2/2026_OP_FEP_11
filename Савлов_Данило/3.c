#include <stdio.h>
#include <math.h>

int main(void) {
    double coefficientA, coefficientB, coefficientC;
    double delta, solutionOne, solutionTwo;

    printf("Введіть коефіцієнти a, b і c: ");
    scanf("%lf %lf %lf", &coefficientA, &coefficientB, &coefficientC);

    if (coefficientA == 0) {
        printf("Коефіцієнт a має бути відмінним від нуля.\n");
        return 1;
    }

    delta = coefficientB * coefficientB
          - 4 * coefficientA * coefficientC;

    if (delta > 0) {
        solutionOne = (-coefficientB + sqrt(delta)) / (2 * coefficientA);
        solutionTwo = (-coefficientB - sqrt(delta)) / (2 * coefficientA);

        printf("Корені рівняння: %.2lf і %.2lf\n",
               solutionOne, solutionTwo);
    } else if (delta == 0) {
        solutionOne = -coefficientB / (2 * coefficientA);
        printf("Єдиний корінь рівняння: %.2lf\n", solutionOne);
    } else {
        printf("Дійсних коренів немає.\n");
    }

    return 0;
}