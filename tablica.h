#include <iostream>
using namespace std;

struct tablica
{
    int **tab;
    int x;
    int y;
};

/** \brief Funkcja tworzaca nowy arkusz (tablice)
@param x - ilosc wieszy
@param y - ilosc kolumn
*/
tablica stworz_tablice(int x, int y);