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
		int i=0;
		if(connect(Connect, (SOCKADDR*)&Client, sizeof(Client)))
		{
			while(recv(Connect,(char*) &oneAir, sizeof(AirName), 0))
			{
				airList.push_back(oneAir);
				Form1->ComboBox1->Items->Add(airList[i].id);
				Form1->ComboBox2->Items->Add(airList[i].id);
				i++;
			}
			break;
		}
	}
}

Request::Request()
{
	strcpy(data.id,AnsiString(Form1->ComboBox1->Text).c_str());
	//strcpy(data.date,AnsiString(Form1->DateTimePicker1->Date.FormatString("ddmmyy")).c_str());
}

void Request::sendRequest()
{
	while(1) // !!!
	{
		int i=0;
		flightData oneFlight;
		//Connect = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		if(connect(Connect, (SOCKADDR*)&Client, sizeof(Client)))
		{
			//if(Form1->ComboBox1->Tag == 1 && Form1->ComboBox2->Tag == 0 )
			send(Connect,(char*) &data, sizeof(AirName), 0);

			while(recv(Connect,(char*) &oneFlight, sizeof(flightData), 0))
			{
				flightList.push_back(oneFlight);
				Form1->StringGrid1->RowCount++;
				Form1->StringGrid1->Cells[0][i+1]= flightList[i].idFrom;
				Form1->StringGrid1->Cells[1][i+1]= flightList[i].nameFrom;
				Form1->StringGrid1->Cells[2][i+1]= flightList[i].idTo;
				Form1->StringGrid1->Cells[3][i+1]= flightList[i].nameTo;
				Form1->StringGrid1->Cells[4][i+1]= flightList[i].timeFrom;
				Form1->StringGrid1->Cells[5][i+1]= flightList[i].timeTo;
				//=Form1->Memo1->Text + flightList[i].nameTo;
				i++;
			}
			break;
		}
	}
}
