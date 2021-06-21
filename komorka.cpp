#include <iostream>
#include "class.h"
using namespace std;

void Komorka_s::wprowadz(string wyraz){
    wartosc = wyraz;
}

void Komorka_d::wprowadz(string wyraz){
    wartosc = stod(wyraz);
}

void* Komorka_s::wczytaj(){
    return &wartosc;
}

void* Komorka_d::wczytaj(){
    return &wartosc;
}

void Arkusz::tablica_typow(int k)
{
    int* tab_typ = new int[k];
    wsk_typ = tab_typ;
}

int Arkusz::typ_danych(int i, int typ)
{
    wsk_typ[i] = typ;
    return 0;
}

Komorka_s::Komorka_s(){
    wartosc = '-';
}

Komorka_d::Komorka_d(){
    wartosc = 0;
}