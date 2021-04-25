#include <iostream>
using namespace std;

/*!
* \brief Funkcja tworzy tablice 2W (arkusz) o zadanych parametrach oraz przekazuje ja dalej do programowi.
*
*\param[in, out] abc to struktura, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*\return zwracany jest wskaznik do arkusza, aby moc bazowac na otrzymanej tablicy w kolejnym pliku .cpp
*/
double** stworz_tablice(struct abc);

/*!
* \brief Funkcja pozwala na wpisanie do arkusza wartosci
*
*\param[in, out] abc to struktura, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*/
void wpisz_wartosci(struct abc);

/*!
* \brief Funkcja usuwa zalokowana pamiec na stworzenie arkusza
*
*\param[in, out] abc to struktura, ktora przechowuje dane o arkuszu (wskaznik do tablicy, liczbe wierszy i kolumn)
*/
void usuwanie_tablicy(struct abc);
