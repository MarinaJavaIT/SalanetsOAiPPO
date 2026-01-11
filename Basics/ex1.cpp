#include <stdio.h> 
#include <windows.h> 
#define CURRENT_YEAR 2025 


void ex1() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int yearBorn, userAge;
	printf("В каком году Вы родились?\n");
	scanf_s(" %d", &yearBorn);
	if (yearBorn > CURRENT_YEAR) {
		printf("Вы еще не родились\n");
		printf("Введите еще раз год вашего рождения.\n");
		printf("В каком году Вы родились?\n");
		scanf_s(" %d", &yearBorn);
	}
	userAge = CURRENT_YEAR - yearBorn;
	printf("В этом году в День рождения Вам исполнится %d лет!\n", userAge);
	if ((yearBorn % 4 == 0)) printf("Вы родились в високосный год!\n");
}