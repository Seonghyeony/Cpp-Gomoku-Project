/* 다양한 유틸 함수에 대해 정의 */
#ifndef GOMOKU_UTIL_H
#define GOMOKU_UTIL_H
#include <vector>
#include <sstream>
using namespace std;
class Util {
public:
	// input 값을 구분자를 기준으로 토큰으로 나누는 함수.
	vector<string> getTokens(string input, char delimiter);
};
#endif // !GOMOKU_UTIL_H