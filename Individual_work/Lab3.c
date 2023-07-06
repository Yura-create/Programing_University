#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    int p, result;

    //Receive data
    printf("Введіть розядність числа(до 30): ");
    scanf("%d", &p);

    //Filter data and calculate the result according to the input data
    if (p > 2 && p < 30){
        result = pow(2, p) - pow(2, p - 2);
        printf("З розрядністю %d можна створити: %d чисел\n", p, result);
    }
    else if (p > 0 && p < 3){
        result = pow(2, p);
        printf("З розрядністю %d можна створити: %d чисел\n", p, result);
    }
    else{
        printf("Ваше число не задовільняє умови(");
    }

    return 0;
}
