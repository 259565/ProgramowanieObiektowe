#include <iostream>
#include "tablica.h"
using namespace std;


double** stworz_tablice(int w, int k){
double** tab = new double *[w];

for(int i = 0; i < k; i++)
{
    tab[i] = new double[k];
}

return tab;
}


void wpisz_wartosci(double** tab, int w, int k){
    for (int i = 0; i < w; i++)
    { 
        for (int j = 0; j < k; j++, cout <<" ")
        {
        cout << "Podaj element " << i + 1 << " " << j + 1 << " tablicy" << endl;
        cin >> tab[i][j];
        }
    }
}

void usuwanie_tablicy(double** tab, int w){
for ( int i = 0; i < w; i++)
{
 delete [] tab[i];
}

delete [] tab;
}