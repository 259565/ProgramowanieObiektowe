#include <iostream>

using namespace std;

class Arkusz{
    public:
double** wsk;
int w;
int k;

//tablica.h
/*!
* \brief Funkcja tworzy tablice 2W (arkusz) o zadanych parametrach oraz przekazuje ja dalej do programowi.
*
*\param[in, out] Arkusz to klasa, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*\return zwracany jest wskaznik do arkusza, aby moc bazowac na otrzymanej tablicy w kolejnym pliku .cpp
*/
double** stworz_tablice(class Arkusz);

/*!
* \brief Funkcja pozwala na wpisanie do arkusza wartosci
*
*\param[in, out] Arkusz to klasa, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*/
void wpisz_wartosci(class Arkusz);

/*!
* \brief Funkcja usuwa zalokowana pamiec na stworzenie arkusza
*
*\param[in, out] Arkusz to klasa, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*/
void usuwanie_tablicy(class Arkusz);
//koniec tablica.h
//tablica_wysw.h
/*!
* \brief Funkcja wyswietla na ekranie zawartosc tablicy stworzonej przez uzytkownika.
*
*\param[in, out] Arkusz to klasa, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*/
void wyswietl_tablice(class Arkusz);
//koniec tablica_wysw.h


//pliki.h
/*!
* \brief Funkcja przenosi wartosci zapisane w arkuszu do zewnetrznego pliku tekstowego, a gdy ten nie istnieje, rowniez go tworzy.
*
*\param[in, out] Arkusz to klasa, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*\param[in] nazwa_pliku to argument odpowiadajacy nazwie pliku, do ktorego ma zostac zapisana zawartosc arkusza
*/
void arkusz_do_pliku(class Arkusz, string nazwa_pliku);

/*!
* \brief Funkcja przenosi wartosci zapisane w zewnetrznym pliku tekstowym do arkusza.
*
*\param[in] nazwa_pliku to argument, ktory odpowiada nazwie pliku, z ktorego maja zostac pobrane dane
*\return zwracany jest wskaznik do arkusza, aby moc bazowac na otrzymanej tablicy w kolejnym pliku .cpp
*/
double** plik_do_arkusza(string nazwa_pliku);

/*!
* \brief Funkcja wczytuje liczbe kolmun tablicy.
*
*\param[in] nazwa_pliku to argument, ktory odpowiada nazwie pliku, z ktorego maja zostac pobrane dane
*\return pozwala na zwrocenie liczby kolumn
*/
int wczytaj_kolumny(string nazwa_pliku);

/*!
* \brief Funkcja wczytuje liczbe wierszy tablicy.
*
*\param[in] nazwa_pliku to argument, ktory odpowiada nazwie pliku, z ktorego maja zostac pobrane dane
*\return pozwala na zwrocenie liczby wierszy
*/
int wczytaj_wiersze(string nazwa_pliku);
//koniec pliki.h



};