#include <stdio.h>
int main(void){

int a;
int b;

printf("_____________________________________debian12 is king______________________________\n");

printf("a = ");
scanf("%d", &a);
printf("b = ");
scanf("%d", &b);

int c=a;				//обхід a++
int d=c;

printf("a= %d\n", a);
printf("b= %d\n", b);

printf("_____________________________________slackware14.2 is emperor______________________\n");

printf("%d + %d = %d\n", a,b,a+b);
printf("%d - %d = %d\n", a,b,a-b);
printf("%d * %d = %d\n", a,b,a*b);
printf("%d / %d = %d\n", a,b,a/b);
printf("%d %% %d = %d\n", a,b,a%b);
printf("%d++=%d\n",a,++d);
printf("%d--=%d\n",a,--c);

printf("%b||%b=%b\n",a,b, a||b);
printf("%b!=%b=%b\n",a,b, a!=b);
printf("%b&&%b=%b\n",a,b, a&&b);

printf("%b&%b=%b\n",a,b, a&b);
printf("%b|%b=%b\n",a,b, a|b);
printf("%b^%b=%b\n",a,b, a^b);
printf("~%b=%b\n",b,(~b));
printf("%b>>2=%b\n",a,a>>2);
printf("%b<<2=%b\n",a,a<<2);

return 0;
}