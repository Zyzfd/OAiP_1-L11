#include "MyFunc.h"

int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z') {
		new_c = 'A' + (c - 'a');
	}
	if (c >= 'à' && c <= 'ï') {
		new_c = 'À' + (c - 'à');
	}
	if (c >= 'ð' && c <= 'ÿ') {
		new_c = 'Ð' + (c - 'ð');
	}
	if (c == '¸') {
		new_c = '¨';
	}
	return new_c;
}

int isDigitMy(char c) {
	if (c >= '0' && c <= '9') {
		return 1;
	}
	return 0;
}

int StrLenMy(char const* c) {
	int lenght = 0;
	
	while (c[lenght] != '\0') {
		lenght++;
	}

	return lenght;
}

int StrCmpMy(char c1[], char c2[]) {
	int i = 0;
	while (c1[i] != '\0' && c2[i] != '\0' && c1[i] == c2[i]) {
		i++;
	}

	return c1[i] - c2[i];
}

void StrCpyMy(char c1[], char c2[]) {
	int i = 0;
	c1[0] = 0;
	while (c2[i] != '\0') {
		c1[i] = c2[i];
		i++;
	}
	c1[i] = '\0';
}

void StrCatMy(char c1[], char c2[]) {
	int k = 0;
	char s[999] = "";
	StrCpyMy(s, c1);
	int i = StrLenMy(s);
	while (c2[k] != '\0') {
		s[i] = c2[k];
		i++;
		k++;
	}
	StrCpyMy(c1, s);
}