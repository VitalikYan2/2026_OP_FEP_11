#include <stdio.h>
int main(void){

char str[90];
char str2[90];
char year[70];
printf ("Enter your favourite cars characteristics \n");
printf("Manufacturer: ");
scanf ("%s",str);
printf("Model: ");
scanf ("%s",str2);
printf("Year: ");
scanf ("%s",year);
printf ("%5s %5s %5s\n",str,str2,year);

return 0;
}
