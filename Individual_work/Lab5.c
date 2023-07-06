#include <stdio.h>
#include <windows.h>

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
    printf("������ ������� ����������� (n): ");
    scanf("%d", &n);

    if (n < 1 || n > 10000)
        printf("���� ����� �� ���������� �����(");
    else {
        int result = countSequences(n);
        printf("ʳ������ ���������� ������������� �������� %d: %d\n", n, result);
    }

    return 0;
}
