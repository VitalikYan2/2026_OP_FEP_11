#include <stdio.h>
#include <string.h>

//1
// int main() {
//     int num1 = 0;
//     int num2 = 0;

//     char result;

//     printf("Enter nam1: ");
//     scanf("%d", &num1);
//     printf("Enter nam2: ");
//     scanf("%d", &num2);


//     strcpy(result,
//             num1 > num2 ? "The first > than second"
//             : num1 < num2 ? "The first < than second"
//             : "The numbers are equal");

//     printf("%s", result);

//     return 0;
// }


//2
// int main() {
//     unsigned int a = 0;
//     unsigned int b = 0;
//     unsigned int c = 0;
    
//     printf("Enter first side: ");
//     scanf("%d", &a);
//     printf("Enter second side: ");
//     scanf("%d", &b);
//     printf("Enter third side: ");
//     scanf("%d", &c);

//     //Перевірка на існування трикутника
//     if ((a + b > c) && (a + c > b) && (b + c > a)){
//         printf("The tringle exist");

//     //Визначення який тип триктника
//     if (a == b && b == c)
//         printf("The tringle is equilateral");
//     else if (a == b  b == c  a == c)
//         printf("The tringle is isosceles");
//     else {
//         printf("The tringle is versatile");
//     }

//     printf(" | ");

//     //Визначення який кут в трикутника 
//     double side1 = a, side2 = b, the_bigest_side = c;
//     double tmp = 0;
    
//     if (side1 > the_bigest_side) {
//       tmp = side1;
//       side1 = the_bigest_side;
//       the_bigest_side = tmp;
//     }
//     if (side2 > the_bigest_side) {
//       tmp = side2;
//       side2 = the_bigest_side;
//       the_bigest_side = tmp;
//     }

//     double max_side = the_bigest_side * the_bigest_side;
//     double sum = (side1 * side1) + (side2 * side2);

//     if (max_side == sum)
//       printf("Rectangular");
//     else if (max_side < sum)
//       printf("Acute-angled");
//     else
//       printf("Obtuse");
        
//     }
//     else
//         printf("The tringle doesn't exist");
    
//     return 0;
// }


//3
// int main() {
//     int num;
    
//     printf("Enter a three-digit number: ");
//     scanf("%d", &num);
    
//     if (num < 100 || num > 999)
//         printf("Error: input must be between 100 and 999\n");

//     int hundreds = num / 100; 
//     int tens = (num / 10) % 10; 
//     int ones = num % 10;        

    
//     switch (hundreds) {
//         case 1: 
//             printf("one hundred "); 
//             break;
//         case 2: 
//             printf("two hundred "); 
//             break;
//         case 3: 
//             printf("three hundred "); 
//             break;
//         case 4: 
//             printf("four hundred "); 
//             break;
//         case 5: 
//             printf("five hundred "); 
//             break;
//         case 6: 
//             printf("six hundred "); 
//             break;
//         case 7: 
//             printf("seven hundred "); 
//             break;
//         case 8:
//             printf("eight hundred "); 
//             break;
//         case 9: 
//             printf("nine hundred "); 
//             break;
//     }

//     if (tens == 1) {
//         switch (ones) {
//             case 0: 
//                 printf("ten\n"); 
//                 break;
//             case 1: 
//                 printf("eleven\n"); 
//                 break;
//             case 2: 
//                 printf("twelve\n"); 
//                 break;
//             case 3: 
//                 printf("thirteen\n"); 
//                 break;
//             case 4: 
//                 printf("fourteen\n"); 
//                 break;
//             case 5: 
//                 printf("fifteen\n"); 
//                 break;
//             case 6: 
//                 printf("sixteen\n"); 
//                 break;
//             case 7: 
//                 printf("seventeen\n"); 
//                 break;
//             case 8: 
//                 printf("eighteen\n"); 
//                 break;
//             case 9: 
//                 printf("nineteen\n"); 
//                 break;
//         }
//     } 
//     else {
//         switch (tens) {
//             case 2: 
//                 printf("twenty-"); 
//                 break;
//             case 3: 
//                 printf("thirty-"); 
//                 break;
//             case 4: 
//                 printf("forty-"); 
//                 break;
//             case 5: 
//                 printf("fifty-"); 
//                 break;
//             case 6: 
//                 printf("sixty-"); 
//                 break;
//             case 7: 
//                 printf("seventy-"); 
//                 break;
//             case 8: 
//                 printf("eighty-"); 
//                 break;
//             case 9: 
//                 printf("ninety-"); 
//                 break;
//         }

//         switch (ones) {
//             case 1: 
//                 printf("one\n"); 
//                 break;
//             case 2: 
//                 printf("two\n"); 
//                 break;
//             case 3: 
//                 printf("three\n"); 
//                 break;
//             case 4: 
//                 printf("four\n"); 
//                 break;
//             case 5: 
//                 printf("five\n"); 
//                 break;
//             case 6: 
//                 printf("six\n"); 
//                 break;
//             case 7: 
//                 printf("seven\n"); 
//                 break;
//             case 8: 
//                 printf("eight\n"); 
//                 break;
//             case 9: 
//                 printf("nine\n"); 
//                 break;
//             case 0: 
//                 printf("\n");
//                 break;
//         }
//     }

//     return 0;
// }
