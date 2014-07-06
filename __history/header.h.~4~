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


struct flightData       //Структура одного Полета
{
	char idFrom[4];
	char nameFrom[10];
	char idTo[10];
	char nameTo[10];
	bool typeOfFlight;
	int date;
};

class Client
{
	private:
		WSAData wsa;
		SOCKET Connect;
		SOCKET Listen;
		SOCKADDR_IN Client;
		u_short port;
	public:
		Client();
		void getAirList();
};

class Request
{
	private:
		char id[4];
		int date;
		vector<flightData> flightList;
	public:
		Requset();
		void sendRequset();
		void getFlightList();
		void printFlightList();
};
