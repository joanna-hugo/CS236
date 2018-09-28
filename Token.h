#pragma once
#include "Token.cpp"
using namespace std;
enum tokenType {
	COMMA, 
	PERIOD, 
	Q_MARK, 
	LEFT_PAREN, 
	RIGHT_PAREN, 
	COLON, 
	COLON_DASH, 
	MULTIPLY, 
	ADD, 
	SCHEMES, 
	FACTS, 
	RULES, 
	QUERIES, 
	ID, 
	STRING, 
	COMMENT, 
	WHITESPACE, 
	UNDEFINED
};
class Token() {
public:
	toString();
	TokenTypeToString(tokenType type);
private:
	//toString() → (COLON_DASH,":-",6)
};