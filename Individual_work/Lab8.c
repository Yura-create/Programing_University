#include <stdio.h>
#include <string.h>
#include <windows.h>

int amount_of_anagrams(int length){
    int temp = 1;

    //Calculating anagrams in different scenarios
    if (3 < length && length <= 14){
        for (int i = 1; i <= length; i++){
            temp *= i;
        }

        return temp / 2;
    }
    else{
        for (int i = 1; i <= length; i++){
            temp *= i;
        }

        return temp;
    }
}

int main(){
    //Set ukrainian language to console
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Main variables
    char word[15];
    int length;

    //Receive data
    printf("������ �����, ��� �� ��������� 14 ����: ");
    scanf("%s", word);

    //Calculate length of the word
    length = strlen(word);

    //Checking if a word contain more than 14 letters
    if (length > 14 || length == 0){
        printf("�� ����, � ������ ���� ����� �� 14 ���� ��� � ����� ���� ����\n");
    }else{
        int result = amount_of_anagrams(length);
        printf("ʳ������ �������: %d", result);
    }

    return 0;
}