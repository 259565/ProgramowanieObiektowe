#include <iostream>
#include "class.h"
using namespace std;


int Arkusz::stworz_tablice(int wiersz, int kolumna){
w = wiersz; k = kolumna;
if (wiersz < 0)
{
    return 1;
}
if (kolumna < 0)
{
    return 2;
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


wsk = tab;
}
return 0;
}


void Arkusz::wpisz_wartosci(){
    string wyraz;
    for (int i = 0; i < w; i++)
    { 
        for (int j = 0; j < k; j++, cout <<" ")
        {
            cout << "Podaj element " << i + 1 << " " << j + 1 << " tablicy" << endl;
            cin >> wyraz;
            wsk[i][j] ->wprowadz(wyraz);
        }
    }
}

void Arkusz::zmiana_rozmiaru(int new_w, int new_k)
{
    Komorka*** tab_zast = new Komorka **[new_w];

    for(int i = 0; i < new_w; i++)
    {
        tab_zast[i] = new Komorka *[new_k];

        for (int j = 0; j < new_k; j++)
        {
            if(wsk_typ[j]==1)
            {
                tab_zast[i][j] = new Komorka_d();
            }

            else if(wsk_typ[j]==2)
            {
                    tab_zast[i][j] = new Komorka_s();
            }
        }
    }

    if(new_w <= w)
    {
        if(new_k <= k)
        {
            for(int i = 0; i < new_w; i++)
            {
                for(int j = 0; j < new_k; j++)
                {
                    tab_zast[i][j] = wsk[i][j];
                }
            }
        }

        else if(new_k > k)
        {
            for(int i = 0; i < new_w; i++)
                {
                    for(int j = 0; j < k; j++)
                    {
                        tab_zast[i][j] = wsk[i][j];
                    }
                }
        }
    }

    if(new_w > w)
    {
        if(new_k <= k)
        {
            for(int i = 0; i < w; i++)
            {
                for(int j = 0; j < new_k; j++)
                {
                    tab_zast[i][j] = wsk[i][j];
                }
            }
        }

        else if(new_k > k)
        {
            for(int i = 0; i < w; i++)
            {
                for(int j = 0; j< k; j++)
                {
                    tab_zast[i][j] = wsk[i][j];
                }
            }
        }
    }


        w = new_w;
        k = new_k; 
        wsk = tab_zast;
}

void Arkusz::usuwanie_tablicy(){
    for ( int i = 0; i < w; i++)
    {
        delete [] wsk[i];
    }

delete [] wsk;
wsk = NULL;
}

double Arkusz::dodawanie_kolumny(int i)
{
    double suma = 0;
    
    for(int l = 0; l < w; l++)
    {
        suma += *(double*)wsk[l][i] ->wczytaj();
    }

    return suma;
}

int Arkusz::ilosc_kolumn()
{
    return k;
}

int Arkusz::ilosc_wierszy()
{
    return w;
}

int* Arkusz::wsk_typ_dostep()
{
    return wsk_typ;
}

double Arkusz::wartosc_min()
{
    double min;
    for(int i = 0, j = 0; i < k && j == 0; i++)
    {
        if(wsk_typ[i] == 1)
        {            
            min = *(double*)wsk[0][i] ->wczytaj(); 
            j++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        if(wsk_typ[i] == 1)
        {
            for (int j = 0; j < w; j++)
            if (*(double*)wsk[j][i] ->wczytaj() < min)
            {
                min = *(double*)wsk[j][i] ->wczytaj();
            }
        }
    }
    return min;
}

double Arkusz::wartosc_max()
{
    double max;
    for(int i = 0, j = 0; i < k && j == 0; i++)
    {
        if(wsk_typ[i] == 1)
        {            
            max = *(double*)wsk[0][i] ->wczytaj(); 
            j++;
        }
    }
    
    for (int i = 0; i < k; i++)
    {
        if(wsk_typ[i] == 1)
        {
            for (int j = 0; j < w; j++)
            if (*(double*)wsk[j][i] ->wczytaj() > max)
            {
                max = *(double*)wsk[j][i] ->wczytaj();
            }
        }
    }
    return max;
}

double Arkusz::srednia()
{
    double suma = 0;
    double l = 0;
    for (int i = 0; i < k; i++)
    {
         if(wsk_typ[i] == 1)
        {
            for (int j = 0; j < w; j++)
            {
            suma += *(double*)wsk[j][i] ->wczytaj();
            l++;
            }
        }
    }
    return (suma/l);
}

double Arkusz::wartosc_min_kolumn(int i)
{
    double min;
    min = *(double*)wsk[0][i] ->wczytaj();
    for(int j = 0; j < w; j++)
    {
    if(*(double*)wsk[j][i] ->wczytaj() < min)
    {
        min = *(double*)wsk[j][i] ->wczytaj();
    }
    }
    return min;
}

double Arkusz::wartosc_max_kolumn(int i)
{
    double max;
    max = *(double*)wsk[0][i] ->wczytaj();
    for(int j = 0; j < w; j++)
    {
    if(*(double*)wsk[j][i] ->wczytaj() > max)
    {
        max = *(double*)wsk[j][i] ->wczytaj();
    }
    }
    return max;
}

void Arkusz::zmiana_pojedynczej_komorki(int wiersz, int kolumna, string wartosc)
{
    if (wsk_typ[kolumna - 1] == 1)
    {
        *(double*)wsk[wiersz - 1][kolumna - 1] ->wczytaj() = stod(wartosc);
    }
    else if (wsk_typ[kolumna - 1] == 2)
    {
        *(string*)wsk[wiersz - 1][kolumna - 1] ->wczytaj() = wartosc;
    }
}
