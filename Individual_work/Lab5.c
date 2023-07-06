#include <stdio.h>
#include <windows.h>

//function that calculate sequences
int countSequences(int n) {
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    return dp[n] % 12345;
}

int main() {
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    int n;

    //Receive data
    printf("Введіть довжину послідовності (n): ");
    scanf("%d", &n);

    //Filter data according to task
    if (n < 1 || n > 10000)
        printf("Ваше число не задовільняє умови(");
    else {
        int result = countSequences(n);
        printf("Кількість допустимих послідовностей довжиною %d: %d\n", n, result);
    }

    return 0;
}
