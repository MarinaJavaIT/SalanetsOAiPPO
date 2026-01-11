#include <stdio.h> 
#include <windows.h> 
void ex10() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ctr = 0;
	printf("Значение счетчика начинает возрастать\n");
	while (ctr < 5) {
		printf("Значение счетчика %d.\n", ++ctr);
	}
	printf("Значение счетчика начинает убывать\n");
	while (ctr >= 1) {
		printf("Значение счетчика %d.\n", ++ctr);
	}
}