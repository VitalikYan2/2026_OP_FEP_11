#include <stdio.h>

int main()
{
  // Task1 ?
  /*
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a > b ? printf("First number is greater\n") :
    a < b ? printf("Second number is greater\n") :
            printf("Numbers are equal\n");

    return 0;*/

  // Task2
  /*
  int a, b, c;

  printf("Enter three sides of a triangle: ");
  scanf("%d %d %d", &a, &b, &c);
  // не існує
  if (a + b <= c || a + c <= b || b + c <= a)
  {
    printf("Such a triangle does not exist\n");
    return 0;
  }

  // за сторонами
  if (a == b && b == c)
    printf("Equilateral\n");
  else if (a == b || b == c || a == c)
    printf("Isosceles\n"); // Рівнобедрений
  else
    printf("Scalene\n"); // Різносторонній

  // за кутами
  if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    printf("Right triangle\n"); // Прямокутний
  else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)
    printf("Obtuse triangle\n"); // Тупокутний
  else
    printf("Acute triangle\n"); // Гострокутний

  return 0;
  */

  // Task 3
  int n;

  printf("Enter a three-digit number: ");
  scanf("%d", &n);

  if (n < 100 || n > 999)
  {
    printf("This is not a three-digit number\n");
    return 0;
  }

  int s = n / 100;     // сотні
  int d = n / 10 % 10; // десятки
  int o = n % 10;      // одиниці

  switch (s)
  {
  case 1:
    printf("one hundred ");
    break;
  case 2:
    printf("two hundred ");
    break;
  case 3:
    printf("three hundred ");
    break;
  case 4:
    printf("four hundred ");
    break;
  case 5:
    printf("five hundred ");
    break;
  case 6:
    printf("six hundred ");
    break;
  case 7:
    printf("seven hundred ");
    break;
  case 8:
    printf("eight hundred ");
    break;
  case 9:
    printf("nine hundred ");
    break;
  }

  if (d == 1)
  {
    // числа 10-19
    switch (o)
    {
    case 0:
      printf("ten");
      break;
    case 1:
      printf("eleven");
      break;
    case 2:
      printf("twelve");
      break;
    case 3:
      printf("thirteen");
      break;
    case 4:
      printf("fourteen");
      break;
    case 5:
      printf("fifteen");
      break;
    case 6:
      printf("sixteen");
      break;
    case 7:
      printf("seventeen");
      break;
    case 8:
      printf("eighteen");
      break;
    case 9:
      printf("nineteen");
      break;
    }
  }
  else
  {
    switch (d)
    {
    case 2:
      printf("twenty ");
      break;
    case 3:
      printf("thirty ");
      break;
    case 4:
      printf("forty ");
      break;
    case 5:
      printf("fifty ");
      break;
    case 6:
      printf("sixty ");
      break;
    case 7:
      printf("seventy ");
      break;
    case 8:
      printf("eighty ");
      break;
    case 9:
      printf("ninety ");
      break;
    }
    switch (o)
    {
    case 1:
      printf("one");
      break;
    case 2:
      printf("two");
      break;
    case 3:
      printf("three");
      break;
    case 4:
      printf("four");
      break;
    case 5:
      printf("five");
      break;
    case 6:
      printf("six");
      break;
    case 7:
      printf("seven");
      break;
    case 8:
      printf("eight");
      break;
    case 9:
      printf("nine ");
      break;
    }
  }

  printf("\n");
  return 0;
}
