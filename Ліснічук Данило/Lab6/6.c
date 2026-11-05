#include <stdio.h>
#include <ctype.h>

// Написати програму, котра дозволяє ввести речення і підрахувати кількість голосних і приголосних у ньому. 
int main() {
    char sntense[1000];

    printf("Enter the sentence: ");
    fgets(sntense, sizeof(sntense), stdin);
    printf("%s\n", sntense);

    for(int i = 0; sntense[i] != '\0'; i++){
        char tmp = sntense[i];

        if(tmp == ' '){
            printf("\n");
        }
        
        if((tmp >= 'a' && tmp <= 'z') || (tmp >= 'A' && tmp <= 'Z')){

            char tmp_lower = tolower(tmp);

            if(tmp_lower == 'a' || 
                tmp_lower == 'o' ||
                tmp_lower == 'i' ||
                tmp_lower == 'e' ||  
                tmp_lower == 'u' || 
                tmp_lower == 'y'){
                    printf("This is the Vowel - %c\n", tmp_lower);
                }
            else {
                printf("This is the Consonant - %c\n", tmp_lower);
            }  
        }
        else{
            printf("Can't read this symbol\n");
        }
    }

    return 0;
}


//Написати програму, котра в циклі while вираховує суму перших 100-та чисел за винятком Вашого порядкового номера в журналі і числа 33. 
int main() {
    int startNum = 0;
    int result = 0;
    int i = 0;
    unsigned int yourNum = 0;
    printf("Enter start value: ");
    scanf("%d", &startNum);
    printf("Enter your number: ");
    scanf("%d", &yourNum);

    while (i <= 100){
        if (startNum != yourNum && startNum != 33) {
            result += startNum;
        }

        startNum++;
        i++;   
    }

    printf("%d", result);

    return 0;
}


// Написати програму, котра дозволяє користувачу задати ціле число N∈[7; 12], далі в циклі ввести N дійсних чисел, розрахувати і вивести
// суму введених чисел, середнє арифметичне, мінімальне і максимальне значення. 
int main() {
    int numberN = 0;
    float num = 0;     
    float sum = 0;   
    float min = 0, max = 0;    
    
    do {
        printf("Enter 'N' from 7 to 12: ");
        scanf("%d", &numberN);
    } while(numberN < 7 || numberN > 12);

    for(int i = 1; i <= numberN; i++){
        printf("Enter N %d: ", i);
        scanf("%f", &num);

        sum += num;

        if(i == 1){
            max = num;
            min = num;
        }
        else {
            if(num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
        }
    }

    float averange = sum / numberN;

    printf("Sum: %g\n", sum);
    printf("Averange: %g\n", averange);
    printf("Min: %g\n", min);
    printf("Max: %g\n", max);

    return 0;
}