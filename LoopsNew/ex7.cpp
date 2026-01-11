/*Программа просит пользователя ввести число от 1 до 100, а затем сообщает,
можно ли это число разделить нацело на числа от 2 до 9. САМОСТОЯТЕЛЬНО: ДОБАВИТЬ В
ПРОГРАММУ ПРОВЕРКУ НА ВХОЖДЕНИЕ ВВЕДЕННОГО ПОЛЬЗОВАТЕЛЕМ ЧИСЛА В ДИАПАЗОН ОТ 1 ДО
100*/


#include <stdio.h> 
#include <windows.h> 
void ex7() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Определить переменную для хранения пользовательского числа и получить число от пользователя
	int userNumber;
	printf("Выберите число от 0 до 100 ");
	printf("(Чем больше, тем лучше!)\n");
	scanf_s(" %d", &userNumber); //для переменной типа int, нужен & 
	if ((userNumber > 0) && (userNumber < 100)) {
		printf("%d %s делится на 2.", userNumber, (userNumber % 2 == 0) ? ("") : (" не"));
		printf("\n%d %s делится на 3.", userNumber, (userNumber % 3 == 0) ? ("") : (" не"));
		printf("\n%d %s делится на 4.", userNumber, (userNumber % 4 == 0) ? ("") : (" не"));
		printf("\n%d %s делится на 5.", userNumber, (userNumber % 5 == 0) ? ("") : (" не"));
		printf("\n%d %s делится на 6.", userNumber, (userNumber % 6 == 0) ? ("") : (" не"));
		printf("\n%d %s делится на 7.", userNumber, (userNumber % 7 == 0) ? ("") : (" не"));
		printf("\n%d %s делится на 8.", userNumber, (userNumber % 8 == 0) ? ("") : (" не"));
		printf("\n%d %s делится на 9.", userNumber, (userNumber % 9 == 0) ? ("") : (" не"));
	}
	else printf("Обязательно выберите число от 0 до 100. \n");
}