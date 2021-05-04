#include "Util.h"

vector<string> Util::getTokens(string input, char delimiter) {
	vector<string> tokens;
	istringstream f(input);	// input¿ª ∞¥√º»≠
	string s;
	while (getline(f, s, delimiter)) {
		tokens.push_back(s);
	}
	return tokens;
}