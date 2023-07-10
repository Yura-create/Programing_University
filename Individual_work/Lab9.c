#include <stdio.h>
#include <windows.h>

int minSteps(int x, int y){
    //There is no need to take a single step, so return 0
    if (x == y){
        return 0;
    }

    int count = 1;
    int diff = y - x;

    //If the difference is less than or equal to twice the number of steps
    //make it 0 to make the next step as long as possible
    while (diff > count){
        if (diff <= 2 * count){
            diff = 0;
        }
        count++;
    }

    return count;
}

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    int x, y;

    //Receive data
    printf("Введіть x: ");
    scanf("%d", &x);
    printf("Введіть y: ");
    scanf("%d", &y);

    //Calculate result and return it
    int steps = minSteps(x, y);
    printf("Мінімальна кількість кроків: %d\n", steps);

    return 0;
}
