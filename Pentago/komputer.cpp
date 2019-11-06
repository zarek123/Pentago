#include"pch.h"
#include"komputer.h"

//konstruktor bezargumentowy klasy bazowej
Komputer::Komputer()
{
	symbol1 = "G1";
	symbol2 = "KK";
	Plansza();
}
//destruktor klasy bazowej
Komputer::~Komputer()
{
}

/**
nazwa: losowanie
opis dzialania: metoda losuje liczbe
parametry: brak
wartosc zwracana: losowa liczba ca³kowita z przedzia³u <1,4>
**/
int Komputer::losowanie()
{
	return (std::rand() % 4) + 1;
}

/**
nazwa: losowanie1
opis dzialania: metoda losuje liczbe
parametry: brak
wartosc zwracana: losowa liczba ca³kowita z przedzia³u <1,9>
**/
int Komputer::losowanie1()
{
	return (std::rand() % 9) + 1;
}
/**
nazwa: losowanie2
opis dzialania: metoda losuje liczbe
parametry: brak
wartosc zwracana: losowa liczba ca³kowita z przedzia³u <0,1>
**/
int Komputer::losowanie2()
{
	return (std::rand() % 2);
}
/**
nazwa: ruch_komputera
opis dzialania: metoda, symuluje ruch komputera
parametry: brak
wartosc zwracana:
0 - jesli nie ma wygranej
1 - jesli  wygrana,remis
**/
int Komputer::ruch_komputera()
{
	int x = 0;
	int y = 0;
	do {
		x = Komputer::losowanie();
		y = Komputer::losowanie1();
		if (Plansza::spr_miejsce(x, y) == 1)
			break;
	} while (true);
	Plansza::postaw_pionek(x, y, symbol2);
	if (Plansza::spr_wygrana(symbol2) == 1)
	{
		cout << "\n\tWygral  Komputer !!!\n" << endl;
		return 1;
	}
	int x1 = 0;
	int y1 = 0;
	x1 = Komputer::losowanie();
	y1 = Komputer::losowanie2();
	Plansza::obrut(x1, y1);

	if (Plansza::spr_wygrana(symbol1) == 1 && Plansza::spr_wygrana(symbol2) == 1)
	{
		cout << "\n\t Remis !!!\n" << endl;
		return 1;
	}
	if (Plansza::spr_wygrana(symbol1) == 1)
	{
		cout << "\n\tGratulacje!!!Wygral GRACZ " << symbol1 << " !!!\n" << endl;
		return 1;
	}
	if (Plansza::spr_wygrana(symbol2) == 1)
	{
		cout << "\n\tWygral  Komputer !!!\n" << endl;
		return 1;
	}
	if (Plansza::spr_remis() == 1)
	{
		cout << "\n\t Remis !!!\n" << endl;
		return 1;
	}
	return 0;

}
