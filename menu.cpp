#include <iostream>
#include "menu.h"
#include "class.h"
using namespace std;

int wybor;

Arkusz sheet;

void menu() {
    
    bool quit = false;
    while (!quit){
 
        cout << "WYBIERZ OPERACJE, KTORA CHCESZ PRZEPROWADZIC: " << endl;
        cout << "0. Jezeli chcesz wyczyscic okno konsoli" << endl << endl;
        cout << "1. Jezeli chcesz stworzyc tablice" << endl; 
        cout << "2. Jezeli chcesz aktualizowac zawartosc arkusza (tablicy)" << endl; 
        cout << "3. Jezeli chcesz wyswietlic arkusz (tablice)" << endl; 
        cout << "4. Jezeli chcesz zmienic rozmiar arkusza (tablicy) [utrata danych arkusza]" << endl; 
        cout << "5. Jezeli chcesz wpisac zawartosc arkusza do pliku tekstowego" << endl;
        cout << "6. Jezeli chcesz wpisac zawartosc pliku tekstowego do arkusza" << endl;
        cout << "7. Jezeli chcesz przeprowadzic operacje na tablicy" << endl;
        cout << "8. Jezeli chcesz zmienic wartosc pojedynczej komorki" << endl;
        cout << "9. Jezeli chcesz zakonczyc program" << endl;

    
        int wiersz, kolumna;
        cin >> wybor;
        if (wybor == 1)
        {
            system ("clear");
            cout << "Tworzenie arkusza. " << endl; 
            cout << "Podaj liczbe wierszy" << endl;
            cin >> wiersz;
            cout << "Podaj liczbe kolumn" << endl;
            cin >> kolumna;
            int blad;

            sheet.tablica_typow(kolumna);
            int typ;
            for(int i = 0; i < kolumna; i++)
            {
                cout << endl << "Jaki ma byc typ kolumny?" << endl << "1 - double" << endl << "2 - string" << endl;
                cin >> typ;
                sheet.typ_danych(i, typ);
            }

            blad = sheet.stworz_tablice(wiersz, kolumna);
            if (blad == 1)
            {
                cout << "Blad! Liczba wierszy musi byc dodatnia." << endl;
            }
            else if (blad == 2)
            {
                cout << "Blad! Liczba kolumn musi byc dodatnia." << endl;
            }
            else cout << "Arkusz zostal utworzony." << endl;
        }

        else if (wybor == 2)
        {
            system ("clear");
            cout << "Aktualizowanie zawartosci arkusza:" << endl;
            sheet.wpisz_wartosci();
        }

        else if (wybor == 3)
        {
            sheet.wyswietl_tablice();
        }

        else if (wybor == 4)
        {
            int new_w;
            int new_k;
            system ("clear");
            cout << "Zmiana rozmiaru tablicy" << endl;
            cout << "Podaj liczbe wierszy: " << endl;
            cin >> new_w;
            cout << "Podaj liczbe kolumn: " << endl;
            cin >> new_k;
            sheet.zmiana_rozmiaru(new_w, new_k);
        }

        else if (wybor == 5)
        {
            system("clear");
            string nazwa_pliku;
            cout << "Podaj nazwe pliku, do ktorego chcesz wpisac zawartosc arkusza (z rozszerzeniem): " << endl;
            cin >> nazwa_pliku;
            if (sheet.arkusz_do_pliku(nazwa_pliku))
            {
                cout << "Blad! Nie udalo sie zapisac wartosci w pliku." << endl;
            }
        else cout << "Poprawny zapis do pliku." << endl;
        }

        else if (wybor == 6)
        {
            system("clear");
            cout << "Podaj nazwe pliku, z ktorego zostana pobrane dane do arkusza: " << endl;
            string nazwa_pliku;
            cin >> nazwa_pliku;
            if (sheet.plik_do_arkusza(nazwa_pliku))
            {
                cout << "Blad! Nie udalo sie otworzyc pliku." << endl;
            }
        else cout << "Poprawne wczytanie wartosci." << endl;
        }

        else if (wybor == 7)
        {
            system ("clear");
             cout << "Wybierz operacje przeprowadzana na akruszu: " << endl;
             cout << "1. Dodawanie wartosci typu double." << endl;
             cout << "2. Znajdz wartosc najwieksza i najmniejsza" << endl;
             cout << "3. Znajdz srednia" << endl;
            int wybor_operacje;
            cin >>  wybor_operacje;
            sheet.wyswietl_tablice();
             switch (wybor_operacje)
            {
                case 1:         
                for (int i = 0; i < sheet.ilosc_kolumn(); i++)
                {
                    if (sheet.wsk_typ_dostep()[i] == 1)
                    {
                        cout << i+1 << "k: " << sheet.dodawanie_kolumny(i) << "\t";
                    }
                }
                cout << endl;
                break;

                case 2:
                cout << "1 - Wartosc minimalna i maksymalna z calego arkusza" << endl;
                cout << "2 - Wartosc minimalna i maksymalna z poszczegolnych kolumn" << endl;
                int wybor_min_max;
                cin >> wybor_min_max;
                if(wybor_min_max == 1)
                {
                cout << "Wartosc minimalna wynosi: " << sheet.wartosc_min() << endl;
                cout << "Wartosc maksymalna wynosi: " << sheet.wartosc_max() << endl;
                }
                if(wybor_min_max == 2)
                {
                    for (int i = 0; i < sheet.ilosc_kolumn(); i++)
                    {
                        if (sheet.wsk_typ_dostep()[i] == 1)
                        {
                            cout << i+1 << "Kmin: " << sheet.wartosc_min_kolumn(i) << "\t";
                        }
                    }
                    for (int i = 0; i < sheet.ilosc_kolumn(); i++)
                    {
                        if (sheet.wsk_typ_dostep()[i] == 1)
                        {
                            cout << i+1 << "Kmax: " << sheet.wartosc_max_kolumn(i) << "\t";
                        }
                    }
                }
                cout << endl;
                break;    

                case 3:
                cout << "1 - Srednia z calego arkusza" << endl;
                cout << "2 - Srednia poszczegolnych kolumn" << endl;
                int wybor_srednia;
                cin >> wybor_srednia;
                if(wybor_srednia == 1)
                {
                    cout << "Srednia wynosi: " << sheet.srednia() << endl;
                }
                else if (wybor_srednia == 2)
                {
                    for (int i = 0; i < sheet.ilosc_kolumn(); i++)
                {
                    if (sheet.wsk_typ_dostep()[i] == 1)
                    {
                        cout << i+1 << "Ksr: " << sheet.dodawanie_kolumny(i)/sheet.ilosc_wierszy() << "\t";
                    }
                }
                cout << endl;
                break;
                }
            }
        }

        else if (wybor == 8)
        {
            double nowy_w;
        double nowa_k;
        string war;
        cout << "Podaj wiersz, w ktorym chcesz zminic wartosc:" << endl;
        cin >> nowy_w;
        cout << "Podaj kolumne, w ktorej chcesz zminic wartosc:" << endl;
        cin >> nowa_k;
        cout << "Podaj nowa wartosc: " << endl;
        cin >> war;
        sheet.zmiana_pojedynczej_komorki(nowy_w, nowa_k, war);
        }

        else if (wybor == 9)
        {
            sheet.usuwanie_tablicy();
            quit = true;
        } 

        else if (wybor == 0)
        {
        system("clear");
        }
    }
}