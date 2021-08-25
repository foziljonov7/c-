//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TImage *Image1;
	TLabel *Label2;
	TImage *Image2;
	TLabel *Label1;
	TImage *Image3;
	TSpeedButton *SpeedButton1;
	TImage *Image10;
	TPanel *Panel3;
	TDBGrid *DBGrid1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TImage *Image4;
	TImage *Image5;
	TPanel *Panel4;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TImage *Image12;
	TImage *Image13;
	TImage *Image14;
	TImage *Image11;
	TImage *Image15;
	TImage *Image16;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TImage *Image17;
	TLabel *Label3;
	TLabel *Label4;
	TADOQuery *ADOQuery2;
	TPopupMenu *PopupMenu1;
	TMenuItem *Delete1;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall Image10Click(TObject *Sender);
	void __fastcall Label4Click(TObject *Sender);
	void __fastcall Edit8Change(TObject *Sender);
	void __fastcall Image11Click(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall Delete1Click(TObject *Sender);
	void __fastcall Image15Click(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
