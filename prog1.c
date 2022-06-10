#include <stdio.h>


int main(){
    int number;
    printf("Enter number -> ");
    scanf("%i", &number);
    (number >=65 && number <= 122) ? printf("It's English letter") : printf("It's not English letter");
    //Есть еще 1 вариант через функцию isalpha заголовочного файла ctype.h 
    return 0;
}