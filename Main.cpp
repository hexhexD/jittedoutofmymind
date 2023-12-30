
// Lexer

enum Token {
	tok_eof = -1,

	// commands
	tok_def = -2,
	tok_extern = -3,

	//primary
	tok_identifier = -4,
	tok_number = -5,
};

static std::string IdentifierStr;
static double NumVal;

// Return the next token from standard input
static int gettok() {
	static int LastChar = ' ';

	// Keep consuming whitespace until we find a non-whitespace character
	while (isspace(LastChar))
		LastChar = getchar();

	if (isalpha(LastChar)) {
		IdentifierStr = LastChar;
		while (isalnum(LastCchar = getchar()))
			IdentifierStr += LastChar;

		if (IdentifierStr == "def")
			return tok_def;
		if (IdentifierStr == "extern")
			return tok_extern;
		return tok_identifier;
	}
}

// Lexr end
