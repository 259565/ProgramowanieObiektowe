#include <iostream>
#include "tablica.h"
using namespace std;


struct abc
{
    int w;
    int k;
    double** wsk;
};

double** stworz_tablice(abc arkusz){
double** tab = new double *[arkusz.w];

for(int i = 0; i < arkusz.w; i++)
{
    tab[i] = new double[arkusz.k];
}

return tab;
}


void wpisz_wartosci(abc arkusz){
    for (int i = 0; i < arkusz.w; i++)
    { 
        for (int j = 0; j < arkusz.k; j++, cout <<" ")
        {
        cout << "Podaj element " << i + 1 << " " << j + 1 << " tablicy" << endl;
        cin >> arkusz.wsk[i][j];
        }
    }
}

void usuwanie_tablicy(abc arkusz){
    for ( int i = 0; i < arkusz.w; i++)
    {
        delete [] arkusz.wsk[i];
    }

delete [] arkusz.wsk;
arkusz.wsk = NULL;
}