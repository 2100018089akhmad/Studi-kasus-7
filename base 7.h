#include <iostream>
using namespace std;

class PNS
{

  friend istream operator>>(istream &, PNS &);
  friend ostream operator<<(ostream &, PNS &);

  public :
      void input();
      void proses();
      void output();

  private :
      int i, j, n;
      string nama[50];
      string notelp[12];
      string alamat[20];
      string temp, id[5];
      string jabatan[20];
};

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
  cout<<endl;
  }
}

void PNS::proses()
{
  for (j = 1; j<n; j++)
    {
      temp = id[j];
      for (i=j-1; (i>=0) && (id[i]>temp); i--)
        {
          id[i+1] = id[i];
        }
      id[i+1] = temp;
    }
}

void PNS::output()
{
  cout<<endl;
  cout<<"Hasil Id secara berurutan : ";
  cout<<endl;
  for (int i=0; i<=n; i++)
    {
      cout<<id[i]<<"\t"<<nama[i]<<"\t"<<alamat[i]<<"\t"<<notelp[i]<<"\t"<<jabatan[i]<<endl;
    }
  cout<<endl;
}