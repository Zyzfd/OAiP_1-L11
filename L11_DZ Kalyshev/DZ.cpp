#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <Windows.h>
#include <locale.h>
#include "Func.h"

#define MAX_LEN 80

char fileIn1[] = "C:\\Users\\yanka\\OneDrive\\stuff\\L11 Kalyshev\\in_ht2.txt";
char fileOut1[] = "C:\\Users\\yanka\\OneDrive\\stuff\\L11 Kalyshev\\out_ht2.txt";

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");

	FILE* fin = fopen(fileIn1, "rt");
	FILE* fout = fopen(fileOut1, "wt");
	char s[MAX_LEN];

	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {
				if (need_symb(s[i])) {
					s[i] = '_';
				}
			}
			// сохранить строку в выходной файл
			fprintf_s(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}
	fclose(fin);
	fclose(fout);
	{
		int x;
		scanf("%d", &x);
	}
}