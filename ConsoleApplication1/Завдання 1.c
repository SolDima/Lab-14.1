
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#define size  4


int main() {
    int arr[size];
    int i = 0;
    int* AdrMin = arr;
    int* AdrMax = arr;
    int min = 0;
    int max;
    int a = 0;
    int b = 0;
    int vidstan;

    for (i = 0; i < size; i++) {

        printf("Vvedit %d element masivu: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = (*(AdrMax + i));
    for (i = 0; i < size; i++) {

        if (*(AdrMax + i) >= max) {
            max = (*(AdrMax + i));          // ���������� ������������� �������� � ���� ������� � �����
            a = i;
        }
    }
    min = arr[0];
    for (i = 0; i < size; i++) {

        if (*(AdrMin + i) < min) {
            min = (*(AdrMin + i));          // ���������� ���������� �������� � ���� ������� � �����
            b = i;
        }

    }

    vidstan = abs(a - b);                   // ���������� ������ �� ����������



    
        printf("max: %d   min: %d   \nVidstan mij elementamu: %d\n", max, min, vidstan);         // ���� ����������

    


    return 0;
}
