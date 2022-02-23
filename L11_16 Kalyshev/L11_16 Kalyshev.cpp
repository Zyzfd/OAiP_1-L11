#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include "MyChars.h"

#define MAX_LEN 80


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Start\n");
	FILE* fin = fopen("C:\\Users\\yanka\\OneDrive\\stuff\\L11 Kalyshev\\in1.txt", "rt");
	FILE* fout = fopen("C:\\Users\\yanka\\OneDrive\\stuff\\L11 Kalyshev\\out6.txt", "wt");
	int is_letter = 0;
	char word[81];
	int word_len = 0;
	int ch;
	int n = 0;
	while ((ch = getc(fin)) != EOF) {
		char c = ch;

		if (isLetter(c)) {
			if (!is_letter) {
				word_len = 0;
				is_letter = 1;
			}
			word[word_len++] = c;
		}
		else {
			if (is_letter) {
				word[word_len] = '\0';
				fprintf(fout, "%s\n", word);
				printf("%s\n", word);
			}
			is_letter = 0;
		}
	}
	fclose(fin);
	fclose(fout);
	{
		int x;
		scanf("%d", &x);
	}
}