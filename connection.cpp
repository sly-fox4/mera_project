#include "header.h"

Client::Client()
{
	port=1337;
	WORD Version = MAKEWORD(2, 1);

	WSAStartup(Version, &wsa);

	Connect = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	Client.sin_family = AF_INET;
	Client.sin_port = htons(port);
	Client.sin_addr.s_addr = inet_addr(ip);
}

void Client::getAirList()
{

}
