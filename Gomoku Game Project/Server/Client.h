/* ifndef, define 으로 단 한번 만 불러올 수 있게. */
#ifndef GOMOKU_CLIENT_H
#define GOMOKU_CLIENT_H
#include <WinSock.h>
// 원형
class Client {
private:
	int clientID;
	int roomID;
	SOCKET clientSocket;
public:
	Client(int clientID, SOCKET clientSocket);
	int getClientID();
	int getRoomID();
	void setRoomID(int roomID);
	SOCKET getClientSocket();
};
#endif // !GOMOKU_CLIENT_H
