#include <iostream>
#include "class.h"
using namespace std;


void Arkusz::wyswietl_tablice(Arkusz sheet){
    cout << "Twoj arkusz to: " << endl;
        for (int i = 0; i < sheet.w; i++, cout << endl)
    {
        for (int j = 0; j < sheet.k; j++, cout << " ")
        {
            cout << sheet.wsk[i][j];
        }
    }

}