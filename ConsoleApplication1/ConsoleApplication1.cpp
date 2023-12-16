/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i, min, max, minPos, maxPos;

    // Введення розміру масиву
    printf("Введіть розмір масиву (не більше %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Введення елементів масиву
    printf("Введіть елементи масиву:\n");
    for (i = 0; i < size; ++i) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Ініціалізація мінімуму та максимуму
    min = max = arr[0];
    minPos = maxPos = 0;

    // Пошук мінімального та максимального значення та їхніх позицій
    for (i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            minPos = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            maxPos = i;
        }
    }

    // Виведення мінімуму та максимуму
    printf("Мінімальне значення: %d (позиція %d)\n", min, minPos);
    printf("Максимальне значення: %d (позиція %d)\n", max, maxPos);

    // Визначення відстані між позиціями за допомогою адресної арифметики
    int distance = maxPos - minPos;
    printf("Відстань між позиціями: %d\n", distance);

    return 0;
}

*/