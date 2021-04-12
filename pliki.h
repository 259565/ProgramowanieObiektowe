#include <iostream>
#include <fstream>
using namespace std;

/*!
* \brief Funkcja przenosi wartosci zapisane w arkuszu do zewnetrznego pliku tekstowego, a gdy ten nie istnieje, rowniez go tworzy
*
*\param[in] tab to argument, ktory pozwala nam przy pomocy wskaznika przeniesc do funkcji tablice 2W (arkusz)
*\param[in] w to argument odpowiadajacy liczbie wierszy arkuszaz
*\param[in] k to argument odpowiadajacy liczbie kolumn arkusza
*/
void arkusz_do_pliku(double** tab, int w, int k);