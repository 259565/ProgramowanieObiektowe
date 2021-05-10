#include <iostream>
#include "menu.h"
#include "class.h"
using namespace std;

int wybor;

Arkusz sheet;

void menu() {
    
    bool quit = false;
    while (!quit){
 
        cout << "Wybierz operacje, ktora chcesz przeprowadzic: " << endl;
        cout << "1. Jezeli chcesz stworzyc tablice" << endl; 
        cout << "2. Jezeli chcesz aktualizowac zawartosc arkusza (tablicy)" << endl; 
        cout << "3. Jezeli chcesz wyswietlic arkusz (tablice)" << endl; 
        cout << "4. Jezeli chcesz zmienic rozmiar arkusza (tablicy)" << endl; 
        cout << "5. Jezeli chcesz wpisac zawartosc arkusza do pliku tekstowego" << endl;
        cout << "6. Jezeli chcesz wpisac zawartosc pliku tekstowego do arkusza" << endl;
        cout << "7. Jezeli chcesz zakonczyc program" << endl;

    
    
        cin >> wybor;
        if (wybor == 1)
        {
            cout << "Tworzenie arkusza. " << endl; 
            cout << "Podaj liczbe wierszy" << endl;
                cin >> sheet.w;
            cout << "Podaj liczbe kolumn" << endl;
                cin >> sheet.k;
            sheet.wsk = sheet.stworz_tablice(sheet);
        }

        else if (wybor == 2)
        {
            cout << "Aktualizowanie zawartosci arkusza:" << endl;
            sheet.wpisz_wartosci(sheet);
        }

        else if (wybor == 3)
        {
            sheet.wyswietl_tablice(sheet);
        }

       // else if (wybor == 4)
        //{
          //  usuwanie_tablicy(wsk, w);
            //cin >> w >> k;
           // arkusz.wsk = stworz_tablice(w, k);
       // }

        else if (wybor == 5)
        {
            string nazwa_pliku;
            cout << "Podaj nazwe pliku, do ktorego chcesz wpisac zawartosc arkusza (z rozszerzeniem): " << endl;
            cin >> nazwa_pliku;
            sheet.arkusz_do_pliku(sheet, nazwa_pliku);
        }

        else if (wybor == 6)
        {
            cout << "Podaj nazwe pliku, z ktorego zostana pobrane dane do arkusza: " << endl;
            string nazwa_pliku;
            cin >> nazwa_pliku;
            sheet.w = sheet.wczytaj_wiersze(nazwa_pliku);
            sheet.k = sheet.wczytaj_kolumny(nazwa_pliku);
            sheet.wsk = sheet.plik_do_arkusza(nazwa_pliku);

        }

        else if (wybor == 7)
        {
            sheet.usuwanie_tablicy(sheet);
            quit = true;
        } 
    }

}