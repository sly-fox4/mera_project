//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include <windows.h>
#include <winsock2.h>
#include <System.hpp>
#include <stdio.h>
#include <vector>
#define ip "127.0.0.1"
using namespace std;
//---------------------------------------------------------------------------

struct AirName         //структура для работы со списком Аэропортов
{
	char id[4];
	char name[30];
};

struct flightData          //Структура для 1 полета
{
	char idFrom[4];
	char nameFrom[30];
	char idTo[4];
	char nameTo[30];
	int timeFrom;
	int timeTo;
	bool typeOfFlight;
	int date;
};

class Client
{
	private:
		WSAData wsa;

		SOCKET Listen;

		u_short port;
	public:
        SOCKADDR_IN Client;
		SOCKET Connect;
		vector<AirName> airList;
		Client();
		void getAirList();
};

class Request : public Client
{
	private:
		AirName data;
		vector<flightData> flightList;
	public:
		Request();
		void sendRequest();
		void getFlightList();
		void printFlightList();
};
