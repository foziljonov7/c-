//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image7Click(TObject *Sender)
{
Form2->ShowModal();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Image6Click(TObject *Sender)
{
String a=Edit1->Text;
String b=Edit2->Text;
if(a=="abbos"&& "b==7777")
{

Form2->Show();
}
else
{ShowMessage("login yoki parol xato");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label2Click(TObject *Sender)
{
String a=Edit1->Text;
String b=Edit2->Text;
if(a=="abbos"&& "b==7777")
{
Form2->Show();
}
else
{ShowMessage("login yoki parol xato");}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Label1Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------


