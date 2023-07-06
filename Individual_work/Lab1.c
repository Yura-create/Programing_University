#include <stdio.h>
#include <windows.h>

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    int t1, t2, t3;
    float result;

    //Receive data
    printf("Введіть 3 числа(Якщо ви введете більше чисел вони не зарахуються):\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    //Filter data and calculating result
    if(t1 <= 0 || t1 > 10000 || t2 <= 0 || t2 > 10000 || t3 <= 0 || t3 > 10000){
        printf("Одне з ваших чисел не задовільняють умови(\n");
    }else{
        result = 1 / (1.00 / t1 + 1.00 / t2 + 1.00 / t3);
        printf("Час, необхідний для з'їдання пирога: %.2f \n", result);
    }

    return 0;
}
