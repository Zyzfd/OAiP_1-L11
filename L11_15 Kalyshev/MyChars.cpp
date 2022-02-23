#include "MyChars.h"

int toLowerRus(int c) {
	int new_c = c;
	if (c >= (int)'À' && c <= (int)'Ï')
		new_c = 'à' + (c - 'À');
	if (c >= (int)'Ğ' && c <= (int)'ß')
		new_c = 'ğ' + (c - 'Ğ');
	if (c == (int)'¨')
		new_c = '¸';
	return new_c;
}