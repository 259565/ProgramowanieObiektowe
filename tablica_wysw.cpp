#include <iostream>
#include "tablica_wysw.h"
using namespace std;

void wyswietl_tablice(double** tab, int w, int k){
    cout << "Twoj arkusz to: " << endl;
        for (int i = 0; i < w; i++, cout << endl)
    {
        for (int j = 0; j < k; j++, cout << " ")
        cout << tab[i][j];
    }

}