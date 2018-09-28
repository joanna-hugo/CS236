#pragma once
// inputStream
#include <iostream>
#include <fstream>
#include "InputStream.cpp"
using namespace std;

class InputStream {
public:
	void advance(); //if past end of line, do nothing. else index++
	char currentChar();
	InputStream()
	{
		ifstream in_file;
		in_file.open("test1.txt");

		char next = in.get();
		next = in.peek();
		sting line = in.getline();

		while (in.get() != EOF) {

		}
	}

private:
	int lineNumber, index;
	char currentChar;

};