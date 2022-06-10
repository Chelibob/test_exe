#include <stdio.h>

int numberOfDigits(int number){
    int count;
    while (number > 0){
        count++;
        number /= 10;
    }
    return count;
}

int main(){
    int number;
    printf("Enter number -> ");
    scanf("%i", &number);
    printf("Number of digits - %i", numberOfDigits(number));
    return 0;
}