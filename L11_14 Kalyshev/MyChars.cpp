#include "MyChars.h"

int toUpperRus(int c) {
	int new_c = c;
	if (c >= (int)'�' && c <= (int)'�')
		new_c = '�' + (c - '�');
	if (c >= (int)'�' && c <= (int)'�')
		new_c = '�' + (c - '�');
	if (c == (int)'�')
		new_c = '�';
	return new_c;
}