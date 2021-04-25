#include <iostream>
#include <fstream>
using namespace std;

/*!
* \brief Funkcja przenosi wartosci zapisane w arkuszu do zewnetrznego pliku tekstowego, a gdy ten nie istnieje, rowniez go tworzy.
*
*\param[in, out] abc to struktura, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*\param[in] nazwa_pliku to argument odpowiadajacy nazwie pliku, do ktorego ma zostac zapisana zawartosc arkusza
*/
void arkusz_do_pliku(struct abc, string nazwa_pliku);

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