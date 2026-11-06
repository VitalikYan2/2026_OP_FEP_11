#include <stdio.h>

int main(void)
{
    int n;
    printf("Введіть тризначне число: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Це не тризначне число\n");
        return 0;
    }

    int s = n / 100;
    int d = n / 10 % 10;
    int o = n % 10;

    /* сотні */
    switch (s) {
        case 1: printf("сто"); break;
        case 2: printf("двісті"); break;
        case 3: printf("триста"); break;
        case 4: printf("чотириста"); break;
        case 5: printf("п'ятсот"); break;
        case 6: printf("шістсот"); break;
        case 7: printf("сімсот"); break;
        case 8: printf("вісімсот"); break;
        case 9: printf("дев'ятсот"); break;
    }

    /* числа від 10 до 19 */
    if (d == 1) {
        switch (o) {
            case 0: printf(" десять"); break;
            case 1: printf(" одинадцять"); break;
            case 2: printf(" дванадцять"); break;
            case 3: printf(" тринадцять"); break;
            case 4: printf(" чотирнадцять"); break;
            case 5: printf(" п'ятнадцять"); break;
            case 6: printf(" шістнадцять"); break;
            case 7: printf(" сімнадцять"); break;
            case 8: printf(" вісімнадцять"); break;
            case 9: printf(" дев'ятнадцять"); break;
        }
        printf("\n");
        return 0;
    }

    /* десятки */
    switch (d) {
        case 2: printf(" двадцять"); break;
        case 3: printf(" тридцять"); break;
        case 4: printf(" сорок"); break;
        case 5: printf(" п'ятдесят"); break;
        case 6: printf(" шістдесят"); break;
        case 7: printf(" сімдесят"); break;
        case 8: printf(" вісімдесят"); break;
        case 9: printf(" дев'яносто"); break;
    }

    /* одиниці */
    switch (o) {
        case 1: printf(" один"); break;
        case 2: printf(" два"); break;
        case 3: printf(" три"); break;
        case 4: printf(" чотири"); break;
        case 5: printf(" п'ять"); break;
        case 6: printf(" шість"); break;
        case 7: printf(" сім"); break;
        case 8: printf(" вісім"); break;
        case 9: printf(" дев'ять"); break;
    }

    printf("\n");
    return 0;
}