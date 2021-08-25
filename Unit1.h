//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image11;
	TImage *Image12;
	TImage *Image13;
	TPanel *Panel1;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TLabel *Label1;
	TImage *Image6;
	TLabel *Label2;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TImage *Image10;
	TLabel *Label4;
	TEdit *Edit1;
	TEdit *Edit2;
	void __fastcall Image7Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Label2Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Label1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
