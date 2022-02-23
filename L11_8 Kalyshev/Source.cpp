#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <Windows.h>
#include "MyFunc.h"

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ввод строки
	char s[80];
	printf("Введите строку: ");
	fgets(s, 79, stdin);

	char x[] = "BUTTON\n";

	printf("\nВы ввели строку s = \"%s\"", s);

	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		//s[i] = toupper(s[i]);
		s[i] = toUpperAll(s[i]);
	}

	printf("\nСтрока после обработки = %s\n", s);

	printf("len = %d\n", strlen(s));

	printf("len = %d\n", StrLenMy(s));

	printf("cmp = %d\n", strcmp(s, x));

	printf("cmp = %d\n", StrCmpMy(s, x));

	StrCpyMy(s, x);
	printf("cpy = %s\n", s);
	strcpy(s, x);
	printf("cpy = %s\n", s);

	char src[] = "Button";
	char dest[10] = "<>";
	printf("src = %s, dest = %s\n", src, dest);

	StrCatMy(dest, src);
	printf("src = %s, dest = %s\n", src, dest);

	strcat(dest, "!");
	printf("src = %s, dest = %s\n", src, dest);

	{
		int x;
		scanf("%d", &x);
	}
}