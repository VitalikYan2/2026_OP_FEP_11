#include <stdio.h>
// Task1
/*
// повертає 1, якщо число просте, і 0, якщо ні
int isPrime(int n) {
   if (n < 2)
       return 0;

   for (int i = 2; i < n; i++) {
       if (n % i == 0)
           return 0;
   }

   return 1;
}

int main() {
   int n;

   printf("Enter a number: ");
   scanf("%d", &n);

   if (isPrime(n))
       printf("%d is prime\n", n);
   else
       printf("%d is not prime\n", n);

   return 0;
}
*/

// Task2
/*
int sum(int n) {
    if (n > 100)
        return 0;

    return n + sum(n + 1);
}

int main() {
    int nomer = 18;

    printf("Sum from %d to 100: %d\n", nomer, sum(nomer));

    return 0;
}
*/

// Task3
int N = 5;   
int A = 18;  
 
double f(double x) {
    return N * x + A;
}
 
int main() {
    double a = -100, b = 100, c;
 
    while (b - a >= 0.001) {
        c = (a + b) / 2; 
 
        if (f(a) * f(c) <= 0) //ліва
            b = c;
        else                 
            a = c;
    }
 
    printf("x = %lf\n", (a + b) / 2);
 
    return 0;
}

 

