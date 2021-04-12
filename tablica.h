#include <iostream>
using namespace std;

/*!
* \brief Funkcja tworzy tablice 2W (arkusz) o zadanych parametrach oraz przekazuje ja dalej do programu.
*
*\param[in] w to argument odpowiadajacy liczbie wierszy arkusza
*\param[in] k to argument odpowiadajacy liczbie kolumn arkusza
*\param[out] double** zwracany wskaznik pozwala w dalszej czesci programu manipulowac wartosciami arkusza
*/
double** stworz_tablice(int w, int k);

/*!
* \brief Funkcja pozwala na wpisanie do arkusza wartosci
*
*\param[in] tab to argument, ktory pozwala nam przy pomocy wskaznika odniesc sie do uprzednio stworzonej tablicy
*\param[in] w to argument odpowiadajacy liczbie wierszy arkusza, jest przenoszony automatycznie przy wywolaniu tej funkcji
*\param[in] k to argument odpowiadajacy liczbie kolumn arkusza, jest przenoszony automatycznie przy wywolaniu tej funkcji
*/
void wpisz_wartosci(double** tab, int w, int k);

/*!
* \brief Funkcja usuwa zalokowana pamiec na stworzenie arkusza
*
*\param[in] tab to argument, ktory pozwala nam przy pomocy wskaznika odniesc sie do stworzonego arkusza
*\param[in] w to argument odpowiadajacy liczbie wierszy arkusza
*/
void usuwanie_tablicy(double** tab, int w);