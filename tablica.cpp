#include <iostream>
#include "tablica.h"
using namespace std;

tablica stworz_tablice(int x, int y)
{
tablica tab1;
tab1.x = x;
tab1.y = y;
tab1.tab = new int *[x];

    for(int i = 0; i < x; i++) 
        tab1.tab[i] = new int [y];

return tab1;
}