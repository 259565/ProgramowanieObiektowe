#include <iostream>

using namespace std;
class Komorka;
class Arkusz{
    private:
Komorka*** wsk;
int w, k;
int* wsk_typ;

    public:
//tablica.h************************************************************************************************************
/*!
* \brief Funkcja tworzy tablice 2W (arkusz) o zadanych parametrach
*
*\param[in] wiersz to liczba wierszy tworzonego arkusza
*\param[in] kolumna to liczba wkolumn tworzonego arkusza
*/
int stworz_tablice(int wiersz, int kolumna);

/*!
* \brief Funkcja pozwala na wpisanie do arkusza wartosci
*/
void wpisz_wartosci();

/*!
* \brief Funkcja usuwa zalokowana pamiec na stworzenie arkusza
*/
void usuwanie_tablicy();
//koniec tablica.h******************************************************************************************************


//tablica_wysw.h********************************************************************************************************
/*!
* \brief Funkcja wyswietla na ekranie zawartosc tablicy stworzonej przez uzytkownika.
*/
void wyswietl_tablice();
//koniec tablica_wysw.h**************************************************************************************************

//tablica_wysw.h********************************************************************************************************
/*!
* \brief Funkcja zmienia rozmiar dotychczasowej tablicy.
*
*\param[in] new_w to argument przyjmujacy wartosc nowej ilosci wierszy
*\param[in] new_k to argument przyjmujacy wartosc nowej ilosci kolumn
*/
void zmiana_rozmiaru(int new_w, int new_k);

//pliki.h****************************************************************************************************************
/*!
* \brief Funkcja przenosi wartosci zapisane w arkuszu do zewnetrznego pliku tekstowego, a gdy ten nie istnieje, rowniez go tworzy.
*
*\param[in] nazwa_pliku to argument odpowiadajacy nazwie pliku, do ktorego ma zostac zapisana zawartosc arkusza
*/
int arkusz_do_pliku(string nazwa_pliku);

/*!
* \brief Funkcja przenosi wartosci zapisane w zewnetrznym pliku tekstowym do arkusza.
*
*\param[in] nazwa_pliku to argument, ktory odpowiada nazwie pliku, z ktorego maja zostac pobrane dane
*\return zwracany jest kod bledu informujacy nas czy operacja zostala wykonana pomyslnie
*/
int plik_do_arkusza(string nazwa_pliku);

/*!
* \brief Funkcja przypisuje tablicy typow danych odpowiedni rodzaj -> 1. Double, 2. String.
*
*\param[in] i - wskazuje element w tablicy typow danych
*\param[in] typ - przypisuje odpowiedni typ danych -> 1. Double, 2. String
*\return zwracany jest kod bledu informujacy nas czy operacja zostala wykonana pomyslnie
*/
int typ_danych(int i, int typ);

/*!
* \brief Funkcja tworzy nam tablice zawierajaca informacje o typach danych poszczegolnych kolumn arkusza.
*
*\param[in] k - ilosc komorek arkusza
*/
void tablica_typow(int k);

/*!
* \brief Funkcja sumuje elementy danej kolumny arkusza.
*
*\param[in] i - wskazuje rzad odpowiedniej kolumny z arkusza
*\return zwracana jest suma elementow typu double z tablicy
*/
double dodawanie_kolumny(int i);

/*!
* \brief Funkcja uzyskujaca dostep do prywatnej zmiennej ilosci kolumn w arkuszu.
*
*\return zwracana jest liczba kolumn arkusza
*/
int ilosc_kolumn();

/*!
* \brief Funkcja uzyskujaca dostep do prywatnej zmiennej ilosci wierszy w arkuszu.
*
*\return zwracana jest liczba wierszy arkusza
*/
int ilosc_wierszy();

/*!
* \brief Funkcja uzyskujaca dostep do prywatnej zmiennej wskaznika do tablicy arkusza.
*
*\return zwracany jest wskaznik do tablicy arkusza
*/
int* wsk_typ_dostep();

/*!
* \brief Funkcja wylicza wartosc minimalna ze wszystkich elementow arkusza typu double.
*
*\return zwracana jest wartosc minimalna w arkuszu
*/
double wartosc_min();

/*!
* \brief Funkcja wylicza wartosc maksymalna ze wszystkich elementow arkusza typu double.
*
*\return zwracana jest wartosc maksymalna w arkuszu
*/
double wartosc_max();

/*!
* \brief Funkcja wylicza wartosc srednia ze wszystkich elementow arkusza typu double.
*
*\return zwracana jest wartosc srednia w arkuszu
*/
double srednia();

/*!
* \brief Funkcja wylicza wartosc minimalna ze wskazanej kolumny arkusza typu double.
*
*\return zwracana jest wartosc minimalna wskazanej kolumny arkusza
*/
double wartosc_min_kolumn(int i);

/*!
* \brief Funkcja wylicza wartosc maksymalna ze wskazanej kolumny arkusza typu double.
*
*\return zwracana jest wartosc maksymalna wskazanej kolumny arkusza
*/
double wartosc_max_kolumn(int i);

/*!
* \brief Funkcja zmienia pojedyncza komorke w arkuszu
*
*\param[in] wiersz - wskazuje na wiersz, w ktorym maja zajsc zmiany
*\param[in] kolumna - wskazuje na kolumne, w ktorej maja zajsc zmiany
*\param[in] wartosc - to nowa wartosc wprowadzana do komorki
*/
void zmiana_pojedynczej_komorki(int wiersz, int kolumna, string wartosc);

};
//koniec pliki.h*********************************************************************************************************


class Komorka{

public:
/*!
* \brief Funkcja wirtualna wprowadzajaca wartosc do komorki.
*
*\param[in] wyraz - zmienna wprowadzana do prywatnego pola wartosc w komorce
*/
virtual void wprowadz(string wyraz) = 0;

/*!
* \brief Funkcja wirtualna sczytujaca wartosc z komorki.
*/
virtual void* wczytaj() = 0;
};

class Komorka_s : public Komorka{

private:
string wartosc;

public:
void wprowadz(string wyraz);
void* wczytaj();
Komorka_s();
};

class Komorka_d : public Komorka{

private:
double wartosc;

public:
void wprowadz(string wyraz);
void* wczytaj();
Komorka_d();
};
