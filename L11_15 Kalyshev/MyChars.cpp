#include "MyChars.h"

int toLowerRus(int c) {
	int new_c = c;
	if (c >= (int)'�' && c <= (int)'�')
		new_c = '�' + (c - '�');
	if (c >= (int)'�' && c <= (int)'�')
		new_c = '�' + (c - '�');
	if (c == (int)'�')
		new_c = '�';
	return new_c;
}