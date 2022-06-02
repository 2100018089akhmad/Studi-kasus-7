#include "../base.h"
using namespace std;

void PNS::input()
{
  cout<<"Masukkan Banyak Data : "; cin>>n;
  for (int i=0; i<n; i++)
  {
  cout<<"Data ke-"<<i<<endl;
  cout <<"Masukkan ID :";
  cin >>id[i];
  cout <<"Masukkan NAMA :";
  cin >>nama[i];
  cout <<"Masukkan ALAMAT :";
  cin >>alamat[i];
  cout <<"Masukkan noTELP :";
  cin >>notelp[i];
  cout <<"Masukkan JABATAN :";
  cin >>jabatan[i];
  }
}
int main()
{
  PNS pns;
  pns.input();
}