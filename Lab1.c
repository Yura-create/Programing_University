#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    int t1, t2, t3;
    float result;

    //Receive data
    printf("¬вед≥ть 3 числа(якщо ви введете б≥льше чисел вони не зарахуютьс€):\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    //Filter data and calculating result
    if(t1 <= 0 || t1 > 10000 || t2 <= 0 || t2 > 10000 || t3 <= 0 || t3 > 10000){
        printf("ќдне з ваших чисел не задов≥льн€ють умови(\n");
    }else{
        result = (t1 + t2 + t3) / 3.0;
        printf("„ас, необх≥дний дл€ з'њданн€ пирога: %.2f \n", result);
    }

    getch();
    return 0;
}
