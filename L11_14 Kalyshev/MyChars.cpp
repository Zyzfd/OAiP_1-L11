#include "MyChars.h"

int toUpperRus(int c) {
	int new_c = c;
	if (c >= (int)'à' && c <= (int)'ï')
		new_c = 'À' + (c - 'à');
	if (c >= (int)'ğ' && c <= (int)'ÿ')
		new_c = 'Ğ' + (c - 'ğ');
	if (c == (int)'¸')
		new_c = '¨';
	return new_c;
}