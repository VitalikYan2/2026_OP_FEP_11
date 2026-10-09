#include <stdio.h>
int main(){
int t;
printf("type your number:\n");
scanf("%d", &t);
int* y=&t;
int** u=&y;
printf("\n%p",u);
printf("\n%d\n",**u);
return 0;
}
