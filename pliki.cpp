#include <iostream>
#include <fstream>
#include "pliki.h"
using namespace std;

void arkusz_do_pliku(double** tab, int w, int k)
{
    fstream plik;
    plik.open("plik.txt", ios::out);
        if (plik.good() == true)
        {
            cout << "Poprawny zapis do pliku" << endl;
            plik << "Arkusz posiada wymiary " << w << "x" << k << endl;

            for (int i = 0; i < w; i++, plik << endl)
            {
                for (int j = 0; j < k; j++, plik << " ")
                {
                    plik << tab[i][j];
                }
            }
            plik.close();
        }
        else cout << "Blad! Plik nie zostal poprawnie otwarty! Powrot do menu." << endl;
}