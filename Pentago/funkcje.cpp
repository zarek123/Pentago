#include"pch.h"
#include"funkcje.h"


/*
nazwa: koniec_gry
opis dzialania: funkcja wychodzi z gry
parametry: brak;
wartosc zwracana: brak
*/
void koniec_gry()
{
	cout << "\nUWAGA! Postanowiles opuscic gre!!!\n" << endl;
	exit(0);
}

/*
nazwa: zasady
opis dzialania: funkcja wypisuje zasady
parametry: brak
wartosc zwracana: brak
*/
void zasady()
{

	fstream plik;
	plik.open("Zasady.txt", ios::in);
	if (plik.good())
	{
		string napis;
		while (!plik.eof())
		{
			getline(plik, napis);
			cout << napis << endl;
		}
		plik.close();
	}
	else cout << "Error! Nie udalo sie otworzyc pliku!" << endl;



}


/*
nazwa: o_autorze
opis dzialania: funkcja wypisuje informacje o autorze
parametry: brak
wartosc zwracana: brak
*/
void o_autorze()
{
	fstream plik;
	plik.open("Autor.txt", ios::in);
	if (plik.good())
	{
		string napis;
		while (!plik.eof())
		{
			getline(plik, napis);
			cout << napis << endl;
		}
		plik.close();
	}
	else cout << "Error! Nie udalo sie otworzyc pliku!" << endl;
}

/*
nazwa: wczyt1
opis dzialania: funkcjia sprawdza czy gra zapisana by³¹ z komputeram czy z graczem
parametry: brak
wartosc zwracana: string
*/
string wczyt1()
{
	ifstream zapis("Rezultaty.txt", ios::in);
	string wynik;
	zapis >> wynik;
	return wynik;
}

/*
nazwa:czekaj
opis dzia³ania:jet to szablon do funkcji sleep
parametry:
a-czas oczekiwania miedzy ruchem gracza a komputera
wartosc zwracana: Brak.

*/
template<class T1>
void czekaj(T1 a)
{
	Sleep(a);
}

/*
nazwa: menu
opis dzialania: funkcja wyswietla menu i pobiera wybor menu
parametry: brak
wartosc zwracana:
1- Gracz VS Komputer.
2- Gracz VS Gracz.
3. Wczytaj ostatnia gre.
4- Zasady gry.
5- O autorze
6- Koniec gry.
*/
int menu()
{
	cout << "\t\tMENU" << endl;
	cout << "1. Gracz VS Komputer." << endl;
	cout << "2. Gracz VS Gracz." << endl;
	cout << "3. Wczytaj ostatnia gre." << endl;
	cout << "4. Zasady gry." << endl;
	cout << "5. O autorze." << endl;
	cout << "6. Koniec gry." << endl;

	int menu = 0;

	while (true)
	{
		cin >> menu;
		if (cin.fail())
		{
			cout << "Niema takiej opcji" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else if ((menu >= Menu_MIN && menu <= Menu_MAX))
		{
			break;
		}
		else
		{
			cout << "Niema takiej opcji" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}

	return menu;

}

/*
nazwa: gra
opis dzialania: funkcja gra
parametry:
menu - okresla wybor opci gry
wartosc zwracana:
1-Powrot do menu
*/
int gra(int menu)
{
	int a = 1, y;
	switch (menu)
	{
	case 1:
	{
		Komputer *gra = new Komputer();

		do {
			cout << "ruch gracza \n" << endl;
			gra->rysuj();
			if (gra->ruch("G1") == 1)
			{
				czekaj(2000);
				break;
			}
			system("cls");
			cout << "ruch Komputera\n" << endl;
			gra->rysuj();
			if (gra->ruch_komputera() == 1)
			{
				czekaj(2000);
				break;
			}
			czekaj(2000);
			system("cls");
			gra->rysuj();
			cout << "Czy chcesz zapisac  gre:\n 0)Nie\n 1)Tak\n";
			while (true)
			{
				cin >> a;
				if (cin.fail())
				{
					cout << "Niema takiej opcji" << endl;
					cin.clear();
					cin.ignore(1000, '\n');
				}
				else if ((a >= 0 && a <= 1))
				{
					break;
				}
				else
				{
					cout << "Niema takiej opcji" << endl;
					cin.clear();
					cin.ignore(1000, '\n');
				}
			}
			if (a == 1) {
				gra->zapis(gra->symbol());
				break;
			}
			system("cls");
		} while (1);

		break;

	}
	case 2:
	{

		Gracz *gra = new Gracz();

		do {
			cout << "ruch gracza 1\n" << endl;
			gra->rysuj();
			if (gra->ruch("G1") == 1)
			{
				czekaj(2000);
				break;
			}
			system("cls");
			cout << "ruch gracza 2\n" << endl;
			gra->rysuj();
			if (gra->ruch("G2") == 1)
			{
				czekaj(2000);
				break;
			}

			cout << "Czy chcesz zapisac  gre:\n 0)Nie\n 1)Tak\n";
			while (true)
			{
				cin >> a;
				if (cin.fail())
				{
					cout << "Niema takiej opcji" << endl;
					cin.clear();
					cin.ignore(1000, '\n');
				}
				else if ((a >= 0 && a <= 1))
				{
					break;
				}
				else
				{
					cout << "Niema takiej opcji" << endl;
					cin.clear();
					cin.ignore(1000, '\n');
				}
			}
			if (a == 1) {
				gra->zapis(gra->symbol());
				break;
			}
			system("cls");
		} while (1);

		break;

	}
	case 3:
	{
		string pom = wczyt1();

		if (pom == "KK")
		{
			Komputer *gra = new Komputer();
			if (gra->wczyt() == 0)
			{
				break;
			}
			do {
				cout << "ruch gracza \n" << endl;
				gra->rysuj();
				if (gra->ruch("G1") == 1)
				{
					czekaj(2000);
					break;
				}
				system("cls");
				cout << "ruch Komputera\n" << endl;
				gra->rysuj();
				if (gra->ruch_komputera() == 1)
				{
					czekaj(2000);
					break;
				}
				czekaj(2000);
				system("cls");
				gra->rysuj();
				cout << "Czy chcesz zapisac  gre:\n 0)Nie\n 1)Tak\n";
				while (true)
				{
					cin >> a;
					if (cin.fail())
					{
						cout << "Niema takiej opcji" << endl;
						cin.clear();
						cin.ignore(1000, '\n');
					}
					else if ((a >= 0 && a <= 1))
					{
						break;
					}
					else
					{
						cout << "Niema takiej opcji" << endl;
						cin.clear();
						cin.ignore(1000, '\n');
					}
				}
				if (a == 1) {
					gra->zapis(gra->symbol());
					break;
				}
				system("cls");
			} while (1);
		}
		else
		{
			Gracz *gra = new Gracz();
			if (gra->wczyt() == 0)
			{
				break;
			}
			do {
				cout << "ruch gracza 1\n" << endl;
				gra->rysuj();
				if (gra->ruch("G1") == 1)
				{
					czekaj(2000);
					break;
				}
				system("cls");
				cout << "ruch gracza 2\n" << endl;
				gra->rysuj();
				if (gra->ruch("G2") == 1)
				{
					czekaj(2000);
					break;
				}

				cout << "Czy chcesz wyjsc z gry:\n 0)Nie\n 1)Tak\n";
				while (true)
				{
					cin >> a;
					if (cin.fail())
					{
						cout << "Niema takiej opcji" << endl;
						cin.clear();
						cin.ignore(1000, '\n');
					}
					else if ((a >= 0 && a <= 1))
					{
						break;
					}
					else
					{
						cout << "Niema takiej opcji" << endl;
						cin.clear();
						cin.ignore(1000, '\n');
					}
				}
				if (a == 1) {
					gra->zapis(gra->symbol());
					break;
				}
				system("cls");
			} while (1);
		}

		break;
	}
	case 4:
	{
		zasady();
		cout << endl << "0.Koniec gry" << endl;
		cout << "1.Powrot do menu" << endl;
		while (true)
		{
			cin >> a;
			if (cin.fail())
			{
				cout << "Niema takiej opcji" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
			}
			else if ((a >= 0 && a <= 1))
			{
				break;
			}
			else
			{
				cout << "Niema takiej opcji" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
			}
		}
		if (a == 0) {
			koniec_gry();
		}
		break;
	}
	case 5:
	{
		o_autorze();
		cout << endl << "0.Koniec gry" << endl;
		cout << "1.Powrot do menu" << endl;
		while (true)
		{
			std::cin >> a;
			if (std::cin.fail())
			{
				cout << "Niema takiej opcji" << endl;
				std::cin.clear();
				std::cin.ignore(1000, '\n');
			}
			else if ((a >= 0 && a <= 1))
			{
				break;
			}
			else
			{
				cout << "Niema takiej opcji" << endl;
				std::cin.clear();
				std::cin.ignore(1000, '\n');
			}
		}
		if (a == 0) {
			koniec_gry();
		}
		break;
	}

	case 6:
	{
		koniec_gry();
		break;
	}
	}
	return 1;
}