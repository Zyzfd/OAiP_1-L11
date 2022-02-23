// L11_6 Kalyshev.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <Windows.h>
#include <locale.h>

int isDigitMy(char c) {
	if (c >= '0' && c <= '9') {
		return 1;
	}
	return 0;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");

	// ввод строки
	char s[80];
	printf("Введите строку: ");
	fgets(s, 79, stdin);

	printf("\nВы ввели строку s = \"%s\"", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (isdigit(s[i])) {
		//if (isDigitMy(s[i])) {
			s[i] = '$';
		}
	}

	printf("\nСтрока после обработки = %s\n", s);
	{
		int x;
		scanf("%d", &x);
	}
}