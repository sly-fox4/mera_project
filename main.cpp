#include "header.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

TForm1 *Form1;
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Client c1;
	c1.getAirList();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Request r1;
	r1.sendRequest();
}
//---------------------------------------------------------------------------

