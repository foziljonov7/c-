//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------





void __fastcall TForm3::Image2Click(TObject *Sender)
{
Form3->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::SpeedButton1Click(TObject *Sender)
{
Form3->Close();
Form2->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm3::Image10Click(TObject *Sender)
{
Form3->Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm3::Label4Click(TObject *Sender)
{
{
if(Edit8->Text!="")
Form3->ADOQuery1->Filtered=false;
Form3->ADOQuery1->Filter="Nomi like  '%"+Edit8->Text+"%'";
Form3->ADOQuery1->Filtered=true;}

if(Edit8->Text==""){
ADOQuery1->Filtered=false;
ADOQuery1->Filter="Nomi like  '%"+Edit8->Text+"%'";
ADOQuery1->Filtered=true;}
int a=StrToInt(ADOQuery1->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Edit8Change(TObject *Sender)
{
	 if(Edit8->Text==""){
ADOQuery1->Filtered=false;
ADOQuery1->Filter="Nomi like  '%"+Edit8->Text+"%'";
			}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image11Click(TObject *Sender)
{
{
if(Edit8->Text!="")
Form3->ADOQuery1->Filtered=false;
Form3->ADOQuery1->Filter="Nomi like  '%"+Edit8->Text+"%'";
Form3->ADOQuery1->Filtered=true;}

if(Edit8->Text==""){
ADOQuery1->Filtered=false;
ADOQuery1->Filter="Nomi like  '%"+Edit8->Text+"%'";
ADOQuery1->Filtered=true;}
int a=StrToInt(ADOQuery1->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Label3Click(TObject *Sender)
{
Form3->ADOQuery2->SQL->Clear();
Form3->ADOQuery2->SQL->Add("INSERT INTO `superment` (`nomi`, `narxi`, `soni`, `jami`, `shtrix`, `ishlab_chiq`, `kel_sana`) VALUES ('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"')");
Form3->ADOQuery2->ExecSQL();

ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM superment");
ADOQuery1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Delete1Click(TObject *Sender)
{
Form3->ADOQuery1->Delete();
}
//---------------------------------------------------------------------------



void __fastcall TForm3::Image15Click(TObject *Sender)
{
ADOQuery2->SQL->Clear();
ADOQuery2->SQL->Add("INSERT INTO `superment` (`nomi`, `narxi`, `soni`, `jami`, `shtrix`, `ishlab_chiq`, `kel_sana`) VALUES ('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"')");
ADOQuery2->ExecSQL();

ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM regist");
ADOQuery1->Active=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Edit1Change(TObject *Sender)
{
ADOQuery2->SQL->Clear();
ADOQuery2->SQL->Add("Select * from superment where shtrix='"+Edit1->Text+"'");
ADOQuery2->Active=True;

Edit2->Text=ADOQuery1->FieldByName("nomi")->AsString;
Edit3->Text=ADOQuery1->FieldByName("narxi")->AsString;
Edit4->Text=ADOQuery1->FieldByName("soni")->AsString;
Edit5->Text=ADOQuery1->FieldByName("jami")->AsString;
Edit6->Text=ADOQuery1->FieldByName("ishlab_chiq")->AsString;
Edit7->Text=ADOQuery1->FieldByName("kel_sana")->AsString;
}
//---------------------------------------------------------------------------





