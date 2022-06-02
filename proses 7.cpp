#include "../base.h"
using namespace std;

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

int main ()
{
  PNS pns;
  pns.proses();
}