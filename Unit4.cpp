//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ComboBox1Change(TObject *Sender)
{
Label3->Caption=FloatToStr(StrToInt(Edit2->Text)-(StrToInt(Edit2->Text)/100*StrToInt(ComboBox1->Text)));
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label2Click(TObject *Sender)
{
Form4->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image2Click(TObject *Sender)
{
Form4->Close();
}
//---------------------------------------------------------------------------

