#include <iostream>
#include <fstream>
#include "pliki.h"
#include "tablica.h"
using namespace std;

struct abc
{
    int w;
    int k;
    double** wsk;
};

void arkusz_do_pliku(abc arkusz, string nazwa_pliku)
{
    fstream plik;
    plik.open(nazwa_pliku, ios::out);
        if (plik.good() == true)
        {
            cout << "Poprawny zapis do pliku" << endl;
            plik << arkusz.w << " " << arkusz.k << endl;

            for (int i = 0; i < arkusz.w; i++, plik << endl)
            {
                for (int j = 0; j < arkusz.k; j++, plik << " ")
                {
                    plik << arkusz.wsk[i][j];
                }
            }
            plik.close();
        }
        else cout << "Blad! Plik nie zostal poprawnie otwarty! Powrot do menu." << endl;
}


double** plik_do_arkusza(string nazwa_pliku)
{
double** wsk_pliku;
fstream plik;
plik.open(nazwa_pliku, ios::in);
if (plik.good() == true)
{
    int x, y;
    cout << "Plik otwarty poprawnie" << endl;
    plik >> x >> y;
    double** tab = new double *[x];
        for(int i = 0; i < x; i++)
        {
            tab[i] = new double[y];
        }
    
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    plik >> tab[i][j];
                }
            }
        plik.close();
    wsk_pliku = tab;
} else cout << "Blad! Plik nie zostal poprawnie otwarty! Powrot do menu." << endl;

return wsk_pliku;
}

int wczytaj_wiersze(string nazwa_pliku)
{
fstream plik;
plik.open(nazwa_pliku, ios::in);
int x, y;
if (plik.good() == true)
{
    plik >> x >> y;
    plik.close();
} else cout << "Blad! Nie udalo sie wczytac wierszy." << endl;

return x;
}

int wczytaj_kolumny(string nazwa_pliku)
{
fstream plik;
plik.open(nazwa_pliku, ios::in);
int x, y;
if (plik.good() == true)
{
    plik >> x >> y;
    plik.close();
} else cout << "Blad! Nie udalo sie wczytac kolumn." << endl;

return y;
}