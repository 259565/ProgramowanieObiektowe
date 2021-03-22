# ProgramowanieObiektowe

Interfejs uzytkownika:
1. Przywitanie
	*Komunikacja z uzytkownikiem, start programu, przywitanie
	
2. Wybór działania:
	2.1 Wysłanie zapytania do użytkownika o żądane operacje
  	
		2.2 Zmiany w arkuszu
			*Zapytanie o obszar pracy i żądane wartości
   
			2.3 Zmiana rozmiaru arkusza
				*Zapytanie o oczekiwane rozmiaru tablicy(arkusza)

				2.4 Zapisanie arkusza do pliku
					*Zapytanie o obszar arkusza do zapisu w pliku
					*Zapytanie o plik, w ktorym maja zostac zapisane dane
	  
						2.5 Odczyt danych z pliku
							*Zapytanie o plik, do ktorego maja zostac wpisane dane
							*Zapytanie plik, z ktorego dane maja byc przekazane do arkusza
    


Arkusz:
1. Funkcja wprowadzajaca dane do tablicy:
	*Zapytanie użytkownika poprzez interfejs o miejsce pracy na arkuszu;
		*Wskazanie na odpowiedni obszar przeznaczony do modyfikacji ("Przeniesienie" wprowadzonych danych przez uzytkownika, np. A2, na rzeczywisty element tablicy, wskazany przez uzytkownika, np tab[0][1]) wskazany przy pomocy interfejsu;
			*Zapytanie o wartości, które użytkownik chce wpisać w wyznaczony obszar poprzez interfejs;
				*Wczytanie wartosci podanej przez uzytkownika i wpisanie jej do wyznaczonego obszaru tablicy;

2. Funkcja wyswietlajaca dane z tablicy na ekranie
	*Wypisanie na ekranie wszystkich elementów tablicy;
	
3. Funkcja zmieniajaca parametry tablicy (rozmiar)
	*Zmiana wartości zmiennych odpowiadajacych za rozmiar tablicy -  wprowadzana przez użytkownika po odpowiednim zapytaniu przez interfejs;


4. Operacje na plikach
	*Funkcja przekazujaca dane z arkusza do pliku
		-plik nalezy otworzyc, a po operacji zamknac
		-dane nalezy krokowo sczytywac z arkusza i przekazywac do pliku
	*Funkcja przekazujaca dane z pliku do arkusza 
		-plik nalezy otworzyc, a po operacji zamknac
		-dane nalezy krokowo sczytywac z pliku i przekazywac do arkusza
	
