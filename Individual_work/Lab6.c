#include <stdio.h>
#include <math.h>
#include <windows.h>

//Function, which calculate length of vector
double calculate_length(int x1, int y1, int x2, int y2){
    int x = x2 - x1;
    int y = y2 - y1;
    double result = sqrt(x*x + y*y);

    return result;
}

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    int x1, y1, x2, y2;

    //Receive data
    printf("Введіть координати двох точок(х1, y1, x2, y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    //Call function to calculate vector's length
    double result = calculate_length(x1, y1, x2, y2);
    printf("Довжина вектора: %.6f", result);

    return 0;
}