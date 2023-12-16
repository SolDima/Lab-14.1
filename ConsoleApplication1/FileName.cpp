/*
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i, sum = 0;

    // Введення розміру масиву
    printf("Введіть розмір масиву (не більше %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Введення елементів масиву
    printf("Введіть елементи масиву:\n");
    for (i = 0; i < size; ++i) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Використання покажчика для ітерації через масив та обчислення суми
    int* ptr = arr;
    for (i = 0; i < size; ++i) {
        sum += *ptr;
        ptr++; // Перехід до наступного елемента масиву
    }

    // Обчислення середнього значення
    double average = (double)sum / size;

    // Виведення середнього значення
    printf("Середнє значення елементів масиву: %.2f\n", average);

    return 0;
}
*/