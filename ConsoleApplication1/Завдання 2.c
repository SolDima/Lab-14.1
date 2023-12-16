#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#define size  6


int main2() {
	int arr[size];
	int i = 0;
	int *pokaz;
	int sum = 0;
	float res;

	for (i = 0; i < size; i++) {

		printf("Vvedit %d element masivu: ", i);
		scanf("%d", &arr[i]);
	}
	pokaz = arr[0];
	for (i = 0; i < size; i++) {
		sum = sum + (*(pokaz + i));
	}

	res = sum / size;




	for (i = 0; i < size; i++) {
		printf("Елементи масиву: %d\n", (*(pokaz + i)));

	}
	printf("Середнє значення елементів масиву: %2.f", res);


	return 0;
}