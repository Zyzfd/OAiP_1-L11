#include "MyChars.h"

int isLetter(int c) {
	if (c >= 'a' && c <= 'z') {
		return 1;
	}
	if (c >= 'A' && c <= 'Z') {
		return 1;
	}

	if (c >= 'à' && c <= 'ï') {
		return 1;
	}
	if (c >= 'ð' && c <= 'ÿ') {
		return 1;
	}
	if (c == '¸') {
		return 1;
	}

	if (c >= 'À' && c <= 'Ï') {
		return 1;
	}
	if (c >= 'Ð' && c <= 'ß') {
		return 1;
	}
	if (c == '¨') {
		return 1;
	}

	return 0;
}