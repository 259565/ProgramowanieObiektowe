#include <iostream>
#include <fstream>
using namespace std;

/*!
* \brief Funkcja przenosi wartosci zapisane w arkuszu do zewnetrznego pliku tekstowego, a gdy ten nie istnieje, rowniez go tworzy.
*
*\param[in] tab to argument, ktory pozwala nam przy pomocy wskaznika przeniesc do funkcji tablice 2W (arkusz)
*\param[in] w to argument odpowiadajacy liczbie wierszy arkuszaz
*\param[in] k to argument odpowiadajacy liczbie kolumn arkusza
*\param[in] nazwa_pliku to argument odpowiadajacy nazwie pliku, do ktorego ma zostac zapisana zawartosc arkusza
*/
void arkusz_do_pliku(double** tab, int w, int k, string nazwa_pliku);

/*!
* \brief Funkcja przenosi wartosci zapisane w zewnetrznym pliku tekstowym do arkusza.
*
*\param[in] nazwa_pliku to argument, ktory odpowiada nazwie pliku, z ktorego maja zostac pobrane dane
*\param[out] double** pozwala na zwrocenie arkusza, ktory zostal pobrany z pliku tekstowego
*/
double** plik_do_arkusza(string nazwa_pliku);

/*!
* \brief Funkcja wczytuje liczbe kolmun tablicy.
*
*\param[in] nazwa_pliku to argument, ktory odpowiada nazwie pliku, z ktorego maja zostac pobrane dane
*\param[out] int pozwala na zwrocenie liczby kolumn
*/
int wczytaj_kolumny(string nazwa_pliku);

/*!
* \brief Funkcja wczytuje liczbe wierszy tablicy.
*
*\param[in] nazwa_pliku to argument, ktory odpowiada nazwie pliku, z ktorego maja zostac pobrane dane
*\param[out] int pozwala na zwrocenie liczby wierszy
*/
int wczytaj_wiersze(string nazwa_pliku);