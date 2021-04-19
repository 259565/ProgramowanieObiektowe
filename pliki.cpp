#include <iostream>
#include <fstream>
#include "pliki.h"
#include "tablica.h"
using namespace std;

void arkusz_do_pliku(double** tab, int w, int k, string nazwa_pliku)
{
    fstream plik;
    plik.open(nazwa_pliku, ios::out);
        if (plik.good() == true)
        {
            cout << "Poprawny zapis do pliku" << endl;
            plik << w << " " << k << endl;

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