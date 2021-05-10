#include <iostream>
#include "class.h"
using namespace std;


double** Arkusz::stworz_tablice(Arkusz sheet){
double** tab = new double *[sheet.w];

for(int i = 0; i < sheet.w; i++)
{
    tab[i] = new double[sheet.k];
}

return tab;
}


void Arkusz::wpisz_wartosci(Arkusz sheet){
    for (int i = 0; i < sheet.w; i++)
    { 
        for (int j = 0; j < sheet.k; j++, cout <<" ")
        {
            cout << "Podaj element " << i + 1 << " " << j + 1 << " tablicy" << endl;
            cin >> sheet.wsk[i][j];
        }
    }
}

void Arkusz::usuwanie_tablicy(Arkusz sheet){
    for ( int i = 0; i < sheet.w; i++)
    {
        delete [] sheet.wsk[i];
    }

delete [] sheet.wsk;
sheet.wsk = NULL;
}