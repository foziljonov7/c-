//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
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
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TImage *Image1;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TImage *Image3;
	TImage *Image2;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TImage *Image10;
	TImage *Image11;
	TImage *Image12;
	TImage *Image14;
	TImage *Image15;
	TLabel *Label2;
	TLabel *Label3;
	TSpeedButton *SpeedButton2;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TImage *Image16;
	TImage *Image17;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TDBGrid *DBGrid1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TImage *Image18;
	TImage *Image19;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TImage *Image13;
	TEdit *Edit5;
	TADOQuery *ADOQuery2;
	TEdit *Edit6;
	TPopupMenu *PopupMenu1;
	TMenuItem *DorilarRoyxati2;
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall Image16Click(TObject *Sender);
	void __fastcall Image17Click(TObject *Sender);
	void __fastcall Label7Click(TObject *Sender);
	void __fastcall Image13Click(TObject *Sender);
	void __fastcall Edit5Change(TObject *Sender);
	void __fastcall Label9Click(TObject *Sender);
	void __fastcall Edit6Change(TObject *Sender);
	void __fastcall Image15Click(TObject *Sender);
	void __fastcall DorilarRoyxati2Click(TObject *Sender);
	void __fastcall Image12Click(TObject *Sender);
	void __fastcall Label5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
