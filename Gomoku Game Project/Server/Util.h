/* �پ��� ��ƿ �Լ��� ���� ���� */
#ifndef GOMOKU_UTIL_H
#define GOMOKU_UTIL_H
#include <vector>
#include <sstream>
using namespace std;
class Util {
public:
	// input ���� �����ڸ� �������� ��ū���� ������ �Լ�.
	vector<string> getTokens(string input, char delimiter);
};
#endif // !GOMOKU_UTIL_H