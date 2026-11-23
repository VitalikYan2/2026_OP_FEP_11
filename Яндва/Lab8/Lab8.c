#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//task1
/*int* randomArray() {
    static int a[10]; 
    for (int i = 0; i < 10; i++)
        a[i] = rand() % 100;

    return a;
}

int main() {
    srand(time(NULL));

    int *arr = randomArray();

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

*/
//task2
/*
int* getElement(int a[10], int i) {
    if (i < 0 || i >= 10)
        return NULL;

    return &a[i];
}

int* getElement2D(int m[12][12], int i, int j) {
    if (i < 0 || i >= 12 || j < 0 || j >= 12)
        return NULL;

    return &m[i][j];
}

int main() {
    int a[10];
    int m[12][12];
    int i, j;
    int *p;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
        a[i] = rand() % 100;

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            m[i][j] = rand() % 100;

    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("Enter index (0-9): ");
    scanf("%d", &i);

    p = getElement(a, i);
    if (p == NULL)
        printf("No such element\n");
    else
        printf("a[%d] = %d\n", i, *p);

        for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++)
        printf("%2d ", m[i][j]);
    printf("\n");
}
    printf("Enter row and column (0-11): ");
    scanf("%d %d", &i, &j);

    p = getElement2D(m, i, j);
    if (p == NULL)
        printf("No such element\n");
    else
        printf("m[%d][%d] = %d\n", i, j, *p);

    return 0;
}

*/
//task3
void analyze(int a[], int n, int *max, int *min, int *sum) {
    *max = a[0];
    *min = a[0];
    *sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > *max) *max = a[i];
        if (a[i] < *min) *min = a[i];
        *sum = *sum + a[i];
    }
}

int main() {
    int a[20];
    int max, min, sum;

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\n");

    analyze(a, 20, &max, &min, &sum);

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Sum: %d\n", sum);

    return 0;
}