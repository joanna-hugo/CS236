string toString(){
}
string TokenTypeToString(tokenType type) {
    switch(type){
    case COMMA:
        return "COMMA";
        break;
    case PERIOD:
        return "PERIOD";
        break;
    case Q_MARK:
        return "Q_MARK";
        break;
    case LEFT_PAREN:
        return "LEFT_PAREN";
        break;
    case RIGHT_PAREN:
        return"RIGHT_PAREN";
        break;
    case COLON:
        return "COLON";
        break;
    case COLON_DASH:
        return "COLON_DASH";
        break;
    case MULTIPLY:
        return "MULTIPLY";
        break;
    case ADD:
        return "ADD";
        break;
    case SCHEMES:
        return "SCHEMES";
        break;
    case FACTS:
        return "FACTS";
        break;
    case RULES:
        return "RULES";
        break;
    case QUERIES:
        return "QUERIES"
        break;
    case ID:
        return "ID";
        break;
    case STRING:
        return "STRING";
        break;
    case COMMENT:
        return "COMMENT";
        break;
    case WHITESPACE:
        return "WHITESPACE";
        break;
    case UNDEFINED:
        return "UNDEFINED";
        break;
    }
    return "ERROR";
    // enum Type, print it, line number
	// COLON_DASH, ":-", 6)
}
