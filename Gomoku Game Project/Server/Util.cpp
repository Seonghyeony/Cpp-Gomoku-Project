#include "Util.h"

vector<string> Util::getTokens(string input, char delimiter) {
	vector<string> tokens;
	istringstream f(input);	// input�� ��üȭ
	string s;
	while (getline(f, s, delimiter)) {
		tokens.push_back(s);
	}
	return tokens;
}