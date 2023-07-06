#include <stdio.h>
#include <windows.h>

//Function that find amount of equal divisors
int find_result(int n){
    int count;

    //Calculate if number is equal divisor to input number and count it
    for (int i = 1; i < n; i++) {
           if (n % i == n / i)
               count++;
    }

    return count;
}

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    int n, result;

    //Receive data
    printf("Введіть натуральне число: ");
    scanf("%d", &n);

    //Filter data according to task and give result
    if(n > 1 && n < 150) {
        result = find_result(n);
        printf("Кількість рівних дільників %d: %d", n, result);
    }else
        printf("Ваше число не задовільняє умови(");


    return 0;
}