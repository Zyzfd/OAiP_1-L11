// L11_15 Kalyshev.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include "MyChars.h"

#define MAX_LEN 80

char fileIn1[] = "C:\\Users\\yanka\\OneDrive\\stuff\\L11 Kalyshev\\in1.txt";
char fileOut1[] = "C:\\Users\\yanka\\OneDrive\\stuff\\L11 Kalyshev\\out2.txt";

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s[MAX_LEN];

	FILE* fin = fopen(fileIn1, "rt");
	FILE* fout = fopen(fileOut1, "wt");
	// в цикле для всех строк
	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {
				s[i] = toLowerRus(s[i]); //!!!!! Это нужно заставить работать!
			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
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
