#include <stdio.h>
#include <windows.h>

//Calculating LCM for 2 numbers by dividing by the remainder
int lcm_two_numbers(int n1, int n2){
    int temp;

    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if(n2 % n1 == 0)
        return n1;
    else
        return lcm_two_numbers(n2 % n1,n1);
}

// Final calculating(GCD) 
int lcm(int n1, int n2){
    int lcm = lcm_two_numbers(n1, n2);

    return (n1 * n2) / lcm;
}

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    int n[20], i, amount_of_d, result = 1;

    //Recieve data
    printf("Введіть кількість чисел для знаходження НСК(не більше 20): ");
    scanf("%d", &amount_of_d);
    printf("Введіть %d числа/чисел для знаходження НСК: ", amount_of_d);

    //Transport data to calculating
    for(i = 0; i < amount_of_d; i++)
        scanf("%d", &n[i]);

    for(i = 0; i < amount_of_d; i++)
        result = lcm(result,n[i]);

    printf("ÍÑÊ = %d\n", result);

    return 0;
}
