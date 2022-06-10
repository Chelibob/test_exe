#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void fill(int arr[], int n);
int findMax(int arr[], int n);

int main(){
    srand(time(NULL));
    int arr[20];
    int maxNumber, count;
    fill(arr, 20);
    maxNumber = findMax(arr, 20);
    for(int i = 0; i < 20; ++i){
        if(fabs(arr[i]) > maxNumber)
            count++;
    }
    printf("Items > max modulo - %i", count);
    return 0;
}

//Функция поиска максимального элемента массива
int findMax(int arr[], int n){
    int max, i = 0;
    max = arr[i];
    for(i = 1; i < n; ++i){
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Max item -> %i\n", max);
    return max;
}

//Функция заполнения массива случайными числами
void fill(int arr[], int n){
    int i;
    for(i = 0; i < n; ++i){
        arr[i] = rand() % 30 - 15; 
        printf("%i ",arr[i]);
    }
    printf("\n");
}