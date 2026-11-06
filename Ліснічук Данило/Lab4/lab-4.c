#include <stdio.h>
#include <math.h>

void convertToBinary(int n) {
 for (int i = 31; i >= 0; i--) {
    int bit = (n >> i) & 1;
    printf("%d", bit);
 }
 printf("\n");
}

int main(){

// Програма, котра ілюструє використання всіх арифметичних і 
// логічних операторів мови Сі, для логічних побітових операцій 
// використовувати представлення чисел в двійковому форматі.
 int a = 9, b = 13;

 printf("Arithmetic operations:\n");
 printf("a / b = %d\n", a / b);
 printf("a * b = %d\n", a * b);
 printf("a - b = %d\n", a - b);
 printf("a + b = %d\n", a + b);
 printf("a %% b = %d\n", a % b);

 printf("\nLogical operations:\n");
 printf("a == b = %d\n", a == b);
 printf("a != b = %d\n", a != b);
 printf("a < b = %d\n", a < b);
 printf("a > b = %d\n", a > b);
 printf("a >= b = %d\n", a >= b);
 printf("a <= b = %d\n", a <= b);

 printf("\nBitwise operations:\n");
 printf("a in binary form: ");
 convertToBinary(a);
 printf("b in binary form: ");
 convertToBinary(b);

 printf("\na & b = %d; : ", a & b);
 convertToBinary(a & b);

 printf("a | b = %d; : ", a | b);
 convertToBinary(a | b);

 printf("a ^ b = %d; : ", a ^ b);
 convertToBinary(a ^ b);

 printf("~a = %d; : ", ~a);
 convertToBinary(~a);

 //Зсув
 printf("a << 1 = %d; : ", a << 1);
 convertToBinary(a << 1);
 printf("a >> 1 = %d; : ", a >> 1);
 convertToBinary(a >> 1);



// Написати програму з введенням числа у змінну і виведенням її адреси та 
// значення через вказівник.
// float number; 
// printf("Enter the number: ");
// scanf("%g", &number);
// float *ptr = &number;
// printf("Adress (&): %d, Value (*): %p", (void*)ptr, *ptr);



// Написати програму розв’язку квадратного рівняння, коефіцієнти якого 
// вводяться з клавіатури.
float a, b, c;
printf("Enter the coefficients a, b, c: ");
scanf("%g %g %g", &a, &b, &c);

double discriminant = b * b - 4 * a * c;
float x1, x2;

if (discriminant > 0){
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("The root-1: %g and root-2: %g\n", x1, x2);
}
else if (discriminant == 0) {
 x1 = -b / (2 * a);
 printf("The root of equation: %g\n", x1);
}
else {
 printf("The root of equation doesn't exist\n");
}



    return 0;
}