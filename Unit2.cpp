//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
Form2->Visible=false;
Form3->ShowModal();

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Image16Click(TObject *Sender)
{
Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image17Click(TObject *Sender)
{
Form2->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Label7Click(TObject *Sender)
{
Form4->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image13Click(TObject *Sender)
{
Form4->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Edit5Change(TObject *Sender)
{
ADOQuery2->SQL->Clear();
ADOQuery2->SQL->Add("Select * from regist where shtrix='"+Edit5->Text+"'");
ADOQuery2->Active=True;

Edit1->Text=ADOQuery2->FieldByName("Nomi")->AsString;
Edit2->Text=ADOQuery2->FieldByName("Narxi")->AsString;
Edit3->Text=ADOQuery2->FieldByName("Soni")->AsString;
Edit4->Text=ADOQuery2->FieldByName("Jami")->AsString;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Label9Click(TObject *Sender)
{
{

 if(Edit6->Text!="")
ADOQuery1->Filtered=false;
ADOQuery1->Filter="Nomi like  '%"+Edit6->Text+"%'";
ADOQuery1->Filtered=true;}

if(Edit6->Text==""){
ADOQuery1->Filtered=false;
ADOQuery1->Filter="Nomi like  '%"+Edit6->Text+"%'";
ADOQuery1->Filtered=true;}
int a=StrToInt(ADOQuery1->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit6Change(TObject *Sender)
{
	 if(Edit6->Text==""){
ADOQuery1->Filtered=false;
ADOQuery1->Filter="Nomi like  '%"+Edit6->Text+"%'";
			}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image15Click(TObject *Sender)
{
{

 if(Edit6->Text!="")
ADOQuery1->Filtered=false;
ADOQuery1->Filter="Nomi like  '%"+Edit6->Text+"%'";
ADOQuery1->Filtered=true;}

if(Edit6->Text==""){
ADOQuery1->Filtered=false;
ADOQuery1->Filter="Nomi like  '%"+Edit6->Text+"%'";
ADOQuery1->Filtered=true;}
int a=StrToInt(ADOQuery1->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DorilarRoyxati2Click(TObject *Sender)
{
Form2->ADOQuery1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image12Click(TObject *Sender)
{
Form3->ADOQuery2->SQL->Clear();
Form3->ADOQuery2->SQL->Add("INSERT INTO `superment` (`nomi`, `narxi`, `soni`, `jami`, `shtrix`) VALUES ('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"')");
Form3->ADOQuery2->ExecSQL();

ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM regist;");
ADOQuery1->Active=true;

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Label5Click(TObject *Sender)
{
Form3->ADOQuery2->SQL->Clear();
Form3->ADOQuery2->SQL->Add("INSERT INTO `regist` (`nomi`, `narxi`, `soni`, `jami`, `shtrix`) VALUES ('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"')");
Form3->ADOQuery2->ExecSQL();

Form2->ADOQuery1->SQL->Clear();
Form2->ADOQuery1->SQL->Add("SELECT * FROM regist;");
Form2->ADOQuery1->Active=true;
}
//---------------------------------------------------------------------------


