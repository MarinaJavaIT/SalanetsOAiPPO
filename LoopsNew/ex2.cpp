//Программа запрашивает у пользователя год рождения и вычисляет, сколько лет
//ему исполняется в этом году.Дополнительно проверяется, не был ли введен еще не
//наступивший год.Кроме того, программа сообщает пользователю, был ли он рожден в
//високосный год.


#include <stdio.h> 
#include <stdlib.h> 
#define CURRENT_YEAR 2026 
void ex2() {
	system("chcp 1251");
	system("cls");
	int yearBorn, userAge;
	printf("В каком году Вы родились?\n");
	scanf_s(" %d", &yearBorn);
	if (yearBorn > CURRENT_YEAR) {
		printf("Правда? Вы еще не родились\n");
		printf("Поздравляем с путешествием во времени\n");
	}
	else {
		userAge = CURRENT_YEAR - yearBorn;
		printf("В этом году в День рождения Вам исполнится %d лет!\n",
			userAge);
	}
}