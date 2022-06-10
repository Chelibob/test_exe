#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int sum = 0, number = 0;
    char str[10];
    while(1){
        fgets(str, 10, stdin);
        if(strcmp(str, "\n") == 0) break;//Если строка пустая, программа заканчивает свое выполнение
        if(number = atoi(str))
            sum += number;
    }
    printf("%i", sum);
    return 0;
}