#include <stdio.h> 
#include <windows.h> 
void ex11() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float num1, num2, result;
	char choice;
	do {
		printf("Введите первый множитель: ");
		scanf_s(" %f", &num1);
		printf("Введите второй множитель: ");
		scanf_s(" %f", &num2);
		result = num1 * num2;
		printf("%.2f умножить на %.2f равняется %.2f\n\n", num1, num2, result);
		printf("Выполнить умножение ");
		printf("следующей пары чисел? (Y/N): ");
		scanf_s(" %c", &choice, 1);
		////Если пользователь в качестве ответа ввел символ n нижнего регистра, 
		//то этот оператор условия if преобразует его в символ N верхнего регистра
			if (choice == 'n') choice = 'N';
	} while (choice != 'N');
}