#include <iostream>
#include "tablica_wysw.h"
using namespace std;

struct abc
{
    int w;
    int k;
    double** wsk;
};


void wyswietl_tablice(abc arkusz){
    cout << "Twoj arkusz to: " << endl;
        for (int i = 0; i < arkusz.w; i++, cout << endl)
    {
        for (int j = 0; j < arkusz.k; j++, cout << " ")
        {
        cout << arkusz.wsk[i][j];
        }
    }

}