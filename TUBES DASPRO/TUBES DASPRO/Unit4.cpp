//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
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

void __fastcall TForm4::Button1Click(TObject *Sender)    //Menu Utama
{
        Form4->Hide();                                   //Form4 (list produk) disembunyikan
        Form3->Show();                                   //Form3 (menu utama) ditampilkan
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button2Click(TObject *Sender)   //Transaksi
{
        Form4->Hide();                                  //Form4 (list produk) disembunyikan
        Form2->Show();                                  //Form2 (transaksi) ditampilkan
}
//---------------------------------------------------------------------------


