//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image2;
	TLabel *Label2;
	TImage *Image3;
	TComboBox *ComboBox1;
	TEdit *Edit1;
	TEdit *Edit2;
	TImage *Image4;
	TLabel *Label3;
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Label2Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
