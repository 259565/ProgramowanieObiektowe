#include <iostream>
#include <fstream>
#include "class.h"
using namespace std;


void Arkusz::arkusz_do_pliku(Arkusz sheet, string nazwa_pliku)
{
fstream plik;
plik.open(nazwa_pliku, ios::out);
if (plik.good() == true)
{
    cout << "Poprawny zapis do pliku" << endl;
    plik << sheet.w << " " << sheet.k << endl;

    for (int i = 0; i < sheet.w; i++, plik << endl)
    {
        for (int j = 0; j < sheet.k; j++, plik << " ")
        {
            plik << sheet.wsk[i][j];
        }
    }
    plik.close();
}
else cout << "Blad! Plik nie zostal poprawnie otwarty! Powrot do menu." << endl;
}


double** Arkusz::plik_do_arkusza(string nazwa_pliku)
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

int Arkusz::wczytaj_wiersze(string nazwa_pliku)
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

int Arkusz::wczytaj_kolumny(string nazwa_pliku)
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