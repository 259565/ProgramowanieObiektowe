#include <iostream>
#include "class.h"
using namespace std;


void Arkusz::wyswietl_tablice()
{
    cout << "Twoj arkusz to: " << endl;
        for (int i = 0; i < w; i++, cout << endl)
    {
        for (int j = 0; j < k; j++, cout << " ")
        {
            if (wsk_typ[j] == 1)
            {
                cout<< *(double*)wsk[i][j] ->wczytaj();
            }
            else if (wsk_typ[j]==2)
            {
                cout << *(string*)wsk[i][j] ->wczytaj();
            }
        }
    }

}