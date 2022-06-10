#include <stdio.h>

//Есть еще вариант решения через массив, заполнить остатки от деления на 10 и по нему пройтись
//2 вариант отсортировать массив по убыванию и взять 1 элемент
int main(){
    int number, maxNumber;
    printf("Enter number -> ");
    scanf("%i", &number);
    maxNumber = number % 10;
    number /= 10;
    while(number > 0){
        if(maxNumber < number % 10)
            maxNumber = number % 10;
        number /= 10;
    }
    printf("Max digit - %i", maxNumber);
    return 0;
}