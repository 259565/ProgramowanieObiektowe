#include <iostream>
#include "tablica.h"
using namespace std;

void menu() {

cout << "Wybierz operacje, ktora chcesz przeprowadzic: " << endl;
    cout << "1. Jezeli chcesz stworzyc tablice" << endl; 
        cout << "2. Jezeli chcesz wyswietlic arkusz (tablice)" << endl;
            cout << "3. Jezeli chcesz wpisac wartosc w arkusz (tablice)" << endl;
                cout << "4. Jezeli chcesz zakonczyc program" << endl;
int wybor;
cin >> wybor;
int x, y;
tablica tab1;

if(wybor == 1) {
    cout << "Podaj liczbe wierszy arkusza: " << endl;
        cin >> x;
    cout << "Podaj liczbe kolumn arkusza: " << endl;
        cin >> y;
    tab1 = stworz_tablice(x,y);
} 

    int a;
    cout << "podaj liczbe" << endl;
    cin >> a;
    if (a > 0)
    delete[] tab1.tab;

/*if else(wybor == 2) {
    int w, k;
    cout << "Podaj liczbe wierszy arkusza: " << endl;
        cin >> w;
    cout << "Podaj liczbe kolumn arkusza: " << endl;
        cin >> k;
    nowy_rozmiar(x,y);
} */

/*if else(wybor == 3) {
cout << "Zawartosc arkusza" << endl;
    wyswietl_arkusz();
} */

/*if else(wybor == 4) {
cout << "Wrocimy do tego";

}*/

}

