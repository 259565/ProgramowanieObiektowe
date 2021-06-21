#include <iostream>
#include <fstream>
#include "class.h"
using namespace std;


int Arkusz::arkusz_do_pliku(string nazwa_pliku)
{
fstream plik;
plik.open(nazwa_pliku, ios::out);
if (plik.good() == true)
{
    plik << w << " " << k << endl;
    for (int i = 0; i < k; i++, plik << " ")
    {
        plik << wsk_typ[i];
    }
    plik << endl;

    for (int i = 0; i < w; i++, plik << endl)
    {
        for (int j = 0; j < k; j++, plik << " ")
        {
            if(wsk_typ[j] == 1)
            {
                plik << *(double*)wsk[i][j] ->wczytaj();
            }
            else if (wsk_typ[j] == 2)
            {
                plik << *(string*)wsk[i][j] ->wczytaj();
            }
        }
    }
    plik.close();
    return 0;
}
else return 1;
}


int Arkusz::plik_do_arkusza(string nazwa_pliku)
{
fstream plik;
plik.open(nazwa_pliku, ios::in);
if (plik.good() == true)
{
    string kopiowane;
    plik >> w >> k;
    int* tab_typow = new int[k];
    wsk_typ = tab_typow;

    for (int i = 0; i < k; i++)
        {
            plik >> wsk_typ[i];
        }

    Komorka*** tab = new Komorka **[w];

    for(int i = 0; i < w; i++)
    {
        tab[i] = new Komorka *[k];
        for(int j = 0; j < k; j++)
        {
            if(wsk_typ[j] == 1)
            {
                tab[i][j] = new Komorka_d();
            }
            else if(wsk_typ[j] == 2)
            {
                tab[i][j] = new Komorka_s();
            }
        }

    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
        plik >> kopiowane;
        tab[i][j] ->wprowadz(kopiowane);
        }
    }   

    wsk = tab;
    plik.close();
    return 0;

} else return 1;

}

