// L11_4 Kalyshev.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ввод строки
	char s[80];
	printf("Введите строку: ");
	fgets(s, 79, stdin);

	printf("\nВы ввели строку s = \"%s\"", s);

	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') cnt++;
	}

	printf("\nВ ней %d пробелов\n", cnt);
	{
		int x;
		scanf("%d", &x);
	}
}