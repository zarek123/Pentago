#include"pch.h"
#include"gracz.h"

//konstruktor bezargumentowy klasy bazowej
Gracz::Gracz()
{
	symbol1 = "G1";
	symbol2 = "G2";
	Plansza();
}
//destruktor klasy bazowej
Gracz::~Gracz()
{
}

/**
nazwa: ruch
opis dzialania: metoda, w ktorej gracz przesuwa sie po planszy w zaleznosci od sytuacji
parametry:
z - okresla, postaæ
wartosc zwracana:
0 - jesli nie ma wygranej
1 - jesli  wygrana,remis
**/
int Gracz::ruch(string z)
{

	int x = 0;
	int y = 0;
	do {
		cout << "\nPodaj numer plamsz, na ktorej chcesz umiescic pionek:\t" << endl;
		while (true)
		{
			cin >> x;
			if (cin.fail())
			{
				cout << "Niema takiej opcji" << endl;
				cout << "\nPodaj numer plamsz, na ktorej chcesz umiescic pionek:\t" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
			}
			else if ((x >= 1 && x <= 4))
			{
				break;
			}
			else
			{
				cout << "Niema takiej opcji" << endl;
				cout << "\nPodaj numer plamsz, na ktorej chcesz umiescic pionek:\t" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
			}
		}
		cout << "\nPodaj numer pola na plamsz, na ktorej chcesz umiescic pionek:\t" << endl;
		while (true)
		{
			cin >> y;
			if (cin.fail())
			{
				cout << "Niema takiej opcji" << endl;
				cout << "\nPodaj numer pola na plamsz, na ktorej chcesz umiescic pionek:\t" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
			}
			else if ((y >= 1 && y <= 9))
			{
				break;
			}
			else
			{
				cout << "Niema takiej opcji" << endl;
				cout << "\nPodaj numer pola na plamsz, na ktorej chcesz umiescic pionek:\t" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
			}
		}
		if (Plansza::spr_miejsce(x, y) == 1)
			break;
		else
			cout << "Podane pole jest zajete" << endl;

	} while (true);
	Plansza::postaw_pionek(x, y, z);
	if (Plansza::spr_wygrana(z) == 1)
	{
		cout << "\n\tGratulacje!!!Wygral GRACZ " << z << " !!!\n" << endl;
		return 1;
	}
	int x1 = 0;
	int y1 = 0;
	cout << "\nPodaj numer plansz, do obrucenia:\t" << endl;
	while (true)
	{
		cin >> x1;
		if (cin.fail())
		{
			cout << "Niema takiej opcji" << endl;
			cout << "\nPodaj numer plansz, do obrucenia:\t" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else if ((x1 >= 1 && x1 <= 4))
		{
			break;
		}
		else
		{
			cout << "Niema takiej opcji" << endl;
			cout << "\nPodaj numer plansz, do obrucenia:\t" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
	cout << "\nPodaj kierunek obracania jescli w prawo kliknij 1 jesli w lewo kliknij 0:\t" << endl;
	while (true)
	{
		cin >> y1;
		if (cin.fail())
		{
			cout << "Niema takiej opcji" << endl;
			cout << "\nPodaj kierunek obracania jescli w prawo kliknij 1 jesli w lewo kliknij 0:\t" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else if ((y1 >= 0 && y1 <= 1))
		{
			break;
		}
		else
		{
			cout << "Niema takiej opcji" << endl;
			cout << "\nPodaj kierunek obracania jescli w prawo kliknij 1 jesli w lewo kliknij 0:\t" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
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
		cout << "\n\tGratulacje!!!Wygral GRACZ " << symbol2 << " !!!\n" << endl;
		return 1;
	}
	if (Plansza::spr_remis() == 1)
	{
		cout << "\n\t Remis !!!\n" << endl;
		return 1;
	}
	return 0;
}
/**
nazwa: symbol
opis dzialania: metoda, zwraca symbol gracza 2
parametry: brak
wartosc zwracana:
symbol2- nazwa pionka
**/
string Gracz::symbol()
{
	return symbol2;
}