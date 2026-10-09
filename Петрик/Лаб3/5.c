#include <stdio.h>
int main()
{
int num = 70;
float flo = 8.973;
char ch='r';
char str[9]="lazy cat";

printf("%d%s\n",num,"_        Decimal output of number");
printf("%b%s\n",num,"_        Binary output of number");
printf("%o%s\n",num,"_        Octal output of number");
printf("%X%s\n",num,"_        Hexidecimal output of number");

printf("%f%s\n",flo,"_        float output of float number");
printf("%e%s\n",flo,"_        exponrntial output of float number");
printf("%g%s\n",flo,"_        flexible output of float number");

printf ("%c%s\n",ch,"_        single character output");
printf("%s%s\n",str,"_        string output");
printf("%p%s\n",str,"_        string output");
}