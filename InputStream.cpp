#include "InputStream.h"
void advance() {
	if (currentChar == -1) {
		//do nothing
	}
	else {
		if (currentChar == '\n') {
			lineNumber++;
		}
		index++
	}
}
char currentChar() {
	if (index >= string.length) {
		return -1
	}
	else {
		return string[index]
	}
}