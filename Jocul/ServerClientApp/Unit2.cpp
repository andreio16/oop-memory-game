//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "CodMemory.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tnet *net;
//---------------------------------------------------------------------------
__fastcall Tnet::Tnet(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tnet::Button1Click(TObject *Sender)
{
        Form1->ServerSocket1->Port = StrToInt(Edit1->Text);
     //   Form1->ServerSocket1->Open();
        net->ModalResult = mrOk;
        net->Hide();
}
//---------------------------------------------------------------------------
void __fastcall Tnet::Button2Click(TObject *Sender)
{
        Form1->ClientSocket1->Port = StrToInt(Edit2->Text);
        Form1->ClientSocket1->Address = Edit3->Text;
     //   Form1->ClientSocket1->Open();
        net->ModalResult = mrAll;
        net->Hide();
}
//---------------------------------------------------------------------------
