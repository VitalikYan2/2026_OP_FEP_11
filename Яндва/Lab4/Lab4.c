#include <stdio.h>
#include <math.h>

// Вивід у двійковій системі.
void print_binary(unsigned int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {/*13
    int a = 2, b = 3;

    printf("=== 1. ARITHMETIC  ===\n");
    printf("a + b = %d\n", a + b);
    printf("++a = %d\n", ++a);//a=3
    printf("a - b = %d\n", a - b);
    printf("--a = %d\n", --a);//a=2
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("\n=== 2. LOGICAL OPERATORS ===\n");
    printf("(a > 10) && (b < 10) = %d\n", (a > 10) && (b < 10));
    printf("(a < 5) || (b == 5) = %d\n", (a < 5) || (b == 5));
    printf("(a != b) = %d\n", (a != b));
    printf("(a >= b) = %d\n", (a >= b));
    printf("(a <= b) = %d\n", (a <= b));


    printf("\n=== 3. BITWISE OPERATORS ===\n");
    unsigned int x = 13; // 00001101
    unsigned int y = 5;  // 00000101

    printf("x="); print_binary(x); printf(" (%d)\n", x);
    printf("y="); print_binary(y); printf(" (%d)\n", y);

    printf("\nx & y = "); print_binary(x & y); printf(" (Bitwise AND)\n");
    printf("x | y = "); print_binary(x | y); printf(" (Bitwise OR)\n");
    printf("x ^ y = "); print_binary(x ^ y); printf(" (Bitwise XOR)\n");//1 якщо різні біти 0 якщо однакові
    printf("~x = "); print_binary((unsigned int)~x); printf(" (Bitwise NOT)\n");//інверсія бітів
    printf("x << 2 = "); print_binary((unsigned int)(x << 2)); printf(" (Shift Left)\n");//зсув
    printf("x >> 1 = "); print_binary(x >> 1); printf(" (Shift Right)\n");

    return 0;
*/
    printf("\n\n=== TASK 2: Pointer ===\n");
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) == 1) {
        int *ptr = &number; // *prt вказікник на  адреса 

    printf("\n--- Results ---\n");
    printf("Value of 'number':               %d\n", number);
    printf("Address of 'number' (&number):   %p\n", &number);
    printf("Address stored in 'ptr':         %p\n", ptr);
    printf("Value via pointer (*ptr):        %d\n", *ptr);;
    }
    
//    printf("================TASK3============\n");
//    double a, b, c; //1 -5 6 //1 -4 4 //1 2 5 D<0

//     printf("=== QUADRATIC EQUATION SOLVER ===\n");
//     printf("Enter coefficients a, b, c: ");
//     if (scanf("%lf %lf %lf", &a, &b, &c) != 3) { 
//         printf("Invalid input!\n");
//         return 0;
//     }

//     if (a == 0) {
//         printf("Not a quadratic equation (a cannot be 0).\n");
//         return 0;
//     }

//     double D = b * b - 4 * a * c;//D=1 D=0
//     printf("Discriminant (D) = %.2f\n", D);

//     if (D > 0) {
//         double x1 = (-b + sqrt(D)) / (2 * a); // 3 //2
//         double x2 = (-b - sqrt(D)) / (2 * a); // 2
//         printf("Two roots: x1 = %.2f, x2 = %.2f\n", x1, x2);
//     } else if (D == 0) {
//         double x = -b / (2 * a);
//         printf("One root: x = %.2f\n", x);
//     } else {
//         printf("No real roots (D < 0).\n");
//     }

//     return 0;

}