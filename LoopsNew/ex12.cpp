#include <stdio.h> 
#include <string.h> 
#include <windows.h> 
void ex12() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ctr, filmNumber, filmRaiting, favRating, worstRating;
	char filmName[40], favFilm[40], worstFilm[40];
	favFilm[0] = '\0';
	worstFilm[0] = '\0';
	favRating = 0;
	worstRating = 10;
	do {
		printf("Сколько фильмов вы посмотрели за этот год? ");
		scanf_s(" %d", &filmNumber);
		/*Если пользователь вводит 0 или отрицательное число, программа
		напомнит ввести положительное число и вновь выведет на экран запрос*/
		if (filmNumber < 1) {
			printf("Ни одного фильма! Как вы можете их оценивать ? \nПопробуйте снова!\n\n"); 
		}
	} while (filmNumber < 1);
	for (ctr = 1; ctr <= filmNumber; ctr++) {
		//Получить название фильма и оценку пользователя  
		printf("\nВведите название фильма ");
		getchar();
		fgets(filmName, 40, stdin);
		printf("Как бы вы его оценили по шкале от 1 до 10? ");
		scanf_s(" %d", &filmRaiting);
		//проверить, не имеет ли данный фильм наивысший рейтинг 
		if (filmRaiting > favRating) {
			strcpy_s(favFilm, filmName);
			favRating = filmRaiting;
		}
		//Проверить, не имеет ли данный фильм низший рейтинг 
		if (filmRaiting < worstRating) {
			strcpy_s(worstFilm, filmName);
			worstRating = filmRaiting;
		}
	}
	printf("\nВаш любимый фильм: %s.\n", favFilm);
	printf("\nВаш наименее любимый фильм: %s.\n", worstFilm);
}