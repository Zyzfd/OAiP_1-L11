#include "MyChars.h"

int isLetter(int c) {
	if (c >= 'a' && c <= 'z') {
		return 1;
	}
	if (c >= 'A' && c <= 'Z') {
		return 1;
	}

	if (c >= '�' && c <= '�') {
		return 1;
	}
	if (c >= '�' && c <= '�') {
		return 1;
	}
	if (c == '�') {
		return 1;
	}

	if (c >= '�' && c <= '�') {
		return 1;
	}
	if (c >= '�' && c <= '�') {
		return 1;
	}
	if (c == '�') {
		return 1;
	}

	return 0;
}