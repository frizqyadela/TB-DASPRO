//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"

AnsiString input1, input2, username="haidefa",password="7777";
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
void __fastcall TForm1::Button1Click(TObject *Sender)    //Login
{
        input1=AnsiString(Edit1->Text);                  //Nilai variabel input1 didapat dari yang diisikan pada Edit1
        input2=AnsiString(Edit2->Text);                  //Nilai variabel input2 didapat dari yang diisikan pada Edit2

       if (input1==username && input2==password)         //Jika input1=username dan input2=password
       {
               ShowMessage("Berhasil Masuk");            //Maka akan menampilkan pesan "Berhasil Masuk"
               Form1->Hide();                            //Form1 disembunyikan
               Form3->Show();                            //Form3 ditampilkan
       }

       else if(input1!=username)                        //Jika input1 (username) salah
       {
               ShowMessage("Username salah!");          //Maka akan menampilkan pesan "Username salah"
               Edit1->Clear();                          //Edit1 dibersihkan
               Edit1->SetFocus();                       //Kursor diarahkan ke Edit1
       }
       else if (input2!=password)                       //Jika input2 (password) salah
       {
              ShowMessage("Password salah!");           //Maka akan menampilkan pesan "Password salah"
              Edit2->Clear();                           //Edit2 dibersihkan
              Edit1->SetFocus();                        //Kursor diarahkan ke Edit1
       }
       else if(input1=="")                              //Jika input1 (username) kosong
       {
               ShowMessage("Masukan Username!");        //Maka akan menampilkan pesan "Masukkan Username"
               Edit1->SetFocus();                       //Kursor diarahkan ke Edit1
       }
       else if (input2=="")                             //Jika input2 (password) kosong
       {
                ShowMessage("Masukan Password!");       //Maka akan menampilkan pesan "Masukkan Password"
                Edit1->SetFocus();                      //Kursor diarahkan ke Edit1
       }


       Edit1->Clear();                                  //Edit1 dibersihkan
       Edit2->Clear();                                  //Edit2 Dibersihkan
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender)   //Close
{
        Application->Terminate();                       //Menutup aplikasi
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked)                                 //Jika CheckBox sama dengan checked maka
  {
 Edit2->PasswordChar = false;                           //Edit2 PasswordChar akan false
 }
 else                                                   //sebaliknya
 {
 Edit2->PasswordChar = '*';                             // Edit2 PasswordChar sama dengan "*"
 }
}
//---------------------------------------------------------------------------






