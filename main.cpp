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
	Form1->StringGrid1->Cells[0][0]= "idFrom";
	Form1->StringGrid1->Cells[1][0]= "nameFrom";
	Form1->StringGrid1->Cells[2][0]= "idTo";
	Form1->StringGrid1->Cells[3][0]= "nameTo";
	Form1->StringGrid1->Cells[4][0]= "timeFrom";
	Form1->StringGrid1->Cells[5][0]= "timeTo";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Request r1;
	r1.sendRequest();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

