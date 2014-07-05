//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include <windows.h>
#include <winsock2.h>

#define ip "127.0.0.1"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
struct message
{
	int ID;
	String time;
};

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//String s;
	u_short port;
	//char message[40];
	port=1337;
    WSAData wsa;
	WORD Version = MAKEWORD(2, 1);

	WSAStartup(Version, &wsa);

	SOCKET Connect = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);


    SOCKADDR_IN Client;

    Client.sin_family = AF_INET;
    Client.sin_port = htons(port);
	Client.sin_addr.s_addr = inet_addr(ip);

	//s=Form1->DateTimePicker1->DateTime.TimeString();

	message mes;
	mes.ID=15;
	while(1) // !!!
    {

		if(connect(Connect, (SOCKADDR*)&Client, sizeof(Client)))
		{
			send(Connect,(char *)&mes,sizeof(mes), 0);

			//recv(Connect, message, sizeof(message), 0);
			break;

        }

	}
}
//---------------------------------------------------------------------------

