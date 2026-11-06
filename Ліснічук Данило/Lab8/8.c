#include <stdio.h>
#include <time.h>
#include <stdlib.h>


// 1. Написати функцію, яка повертає масив з 10 випадкових чисел з діапазону [0…99]
#define SIZE 10

int randomValue(){
    int r = rand() % 99; 
    return r;
}

int setArray(int mas[]){ 
    for(int i = 0; i < 10; i++){
        mas[i] = randomValue();
    };
}

int printArray(int mas[]){
    for (int i=0; i<10; ++i){
        printf("[%d] = %2d ", i, mas[i]);
        printf ("\n");
    };    
}

int main() { 
    int mas[SIZE];
    
    srand(time(NULL)); 
    setArray(mas);
    printArray(mas);
}



// 2. Написати функції, що повертають: 
// а) вказівник на елемент з довільним індексом одновимірного масиву з 10 елементів;
#define SIZE 10

int *getAdressFromArray(int mas[], int element){
    return &mas[element];
}

// б) вказівник на елемент з довільними індексами двовимірного масиву розміром 1212 елементів (повернути NULL, якщо елемент відсутній).
#define SIZE12 12

int *getAdressFromArray12x12(int mas[][SIZE12], int row, int col){
    if (row < 0 || row >= SIZE12 || col < 0 || col >= SIZE12) {
        return NULL; 
    }    
    return &mas[row][col];
}

int main() { 
    int mas[SIZE];
    int mas12x12[SIZE12][SIZE12];

    int *result = getAdressFromArray(mas, 5);
    printf("Result: %p\n", result);

    int *result12x12 = getAdressFromArray12x12(mas12x12, 5, 7);
     if (result12x12 != NULL) {
        printf("Result 12x12: %p", result12x12);
    } else {
        printf("Result 12x12: Element out of bounds (NULL)");
    }
}


// 3. Написати функцію, котра в масиві з 20 випадкових чисел з діапазону [0…99] знаходить максимальний і мінімальний елементи та їхню суму.
#define SIZE 20

int randomValue(){
    int r = rand() % 99; 
    return r;
}

int setArray(int mas[]){ 
    for(int i = 0; i < 10; i++){
        mas[i] = randomValue();
    };
}

void searchElement(int mas[], int *sum, int *min, int *max){
    *min = mas[0];
    *max = mas[0];
    *sum = 0;

   for(int i = 0; i < 10; i++){
        *sum += mas[i];

        if(mas[i] < *min) {
            *min = mas[i];
        }
        if(mas[i] > *max) {
            *max = mas[i];
        }
   };
}

int main() { 
    int mas[SIZE];
    int sum;
    int min;
    int max;

    
    srand(time(NULL)); 
    setArray(mas);
    searchElement(mas, &sum, &min, &max);
    printf("Min: %d, Max: %d, Sum: %d", min, max, sum);
}