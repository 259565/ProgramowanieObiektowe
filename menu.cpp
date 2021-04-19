#include <iostream>
#include "menu.h"
#include "tablica.h"
#include "tablica_wysw.h"
#include "pliki.h"
using namespace std;

double** wsk;
int w, k;
int wybor;
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
        cin >> w;
    cout << "Podaj liczbe kolumn" << endl;
        cin >> k;
    wsk = stworz_tablice(w, k);
}

    else if (wybor == 2)
    {
        cout << "Aktualizowanie zawartosci arkusza:" << endl;
        wpisz_wartosci(wsk, w, k);
    }

        else if (wybor == 3)
        {
            wyswietl_tablice(wsk, w, k);
        }

            else if (wybor == 4)
            {
                usuwanie_tablicy(wsk, w);
                cin >> w >> k;
                wsk = stworz_tablice(w, k);
            }

                else if (wybor == 5)
                {
                    string nazwa_pliku;
                    cout << "Podaj nazwe pliku, do ktorego chcesz wpisac zawartosc arkusza (z rozszerzeniem): " << endl;
                    cin >> nazwa_pliku;
                    arkusz_do_pliku(wsk, w, k, nazwa_pliku);
                }
                    else if (wybor == 6)
                    {
                        cout << "Podaj nazwe pliku, z ktorego zostana pobrane dane do arkusza: " << endl;
                        string nazwa_pliku;
                        cin >> nazwa_pliku;
                        w = wczytaj_wiersze(nazwa_pliku);
                        k = wczytaj_kolumny(nazwa_pliku);
                        wsk = plik_do_arkusza(nazwa_pliku);

                    }

                        else if (wybor == 7)
                        {
                            usuwanie_tablicy(wsk, w);
                            quit = true;
                        }
}

}