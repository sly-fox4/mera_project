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
	AirName oneAir;
	while(1) // !!!
	{
		if(connect(Connect, (SOCKADDR*)&Client, sizeof(Client)))
		{
			//cout << "Complite connect to server." << endl;
			//send(Connect, "Message from client", MAX_PATH, 0);
			recv(Connect,(char*) &oneAir, sizeof(AirName), 0);
			airList.push_back(oneAir);
			Form1->ComboBox1->Items->Add(airList[0].id);
			//recv(Connect,(char*) &oneAir, sizeof(AirName), 0);
			//airList.push_back(oneAir);
			//Form1->ComboBox1->Items->Add(airList[1].id);
			break;
		}
	}

}
