#include"pch.h"
#include"plansza.h"
#include"funkcje.h"
//konstruktor bezargumentowy klasy bazowej
Plansza::Plansza()
{
	for (int i = 0; i < 4; i++)
	{
		plansza_max[i] = i + 1;
	}
	for (int i = 0; i < 9; i++)
	{
		plansza_min[i] = i + 1;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			wybur[i][j] = "--";
		}
	}
}

//konstrktor klasy bazowej
Plansza::Plansza(string p_wybur[4][9])
{
	for (int i = 0; i < 4; i++)
	{
		plansza_max[i] = i + 1;
	}
	for (int i = 0; i < 9; i++)
	{
		plansza_min[i] = i + 1;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			wybur[i][j] = p_wybur[i][j];
		}
	}
}

//destruktor klasy bazowej
Plansza::~Plansza()
{
}

/**
nazwa:  rysuj
opis dzia³ania:  metoda ma za zadanie rysowac plansze na ekranie
parametry: brak
wartoœæ zwracana: brak
**/
void Plansza::rysuj()
{
	cout << endl;
	cout << "\t----------------------------------------------------------------------------------------\n";
	cout << "\t|   \t\t   | " << plansza_max[0] << " |   \t\t   | |   \t\t| " << plansza_max[1] << " |     \t\t|\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|    " << plansza_min[0] << "     |\t|    " << plansza_min[1] << "     |\t|    " << plansza_min[2] << "     | |    " << plansza_min[0] << "     |    |    " << plansza_min[1] << "     |    |    " << plansza_min[2] << "     |\n";
	cout << "\t|    " << wybur[0][0] << "    |\t|    " << wybur[0][1] << "    |\t|    " << wybur[0][2] << "    | |    " << wybur[1][0] << "    |    |    " << wybur[1][1] << "    |    |    " << wybur[1][2] << "    |\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|   \t\t\t\t\t   | |  \t\t\t\t\t|\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|    " << plansza_min[3] << "     |\t|    " << plansza_min[4] << "     |\t|    " << plansza_min[5] << "     | |    " << plansza_min[3] << "     |    |    " << plansza_min[4] << "     |    |    " << plansza_min[5] << "     |\n";
	cout << "\t|    " << wybur[0][3] << "    |\t|    " << wybur[0][4] << "    |\t|    " << wybur[0][5] << "    | |    " << wybur[1][3] << "    |    |    " << wybur[1][4] << "    |    |    " << wybur[1][5] << "    |\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|   \t\t\t\t\t   | |  \t\t\t\t\t|\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|    " << plansza_min[6] << "     |\t|    " << plansza_min[7] << "     |\t|    " << plansza_min[8] << "     | |    " << plansza_min[6] << "     |    |    " << plansza_min[7] << "     |    |    " << plansza_min[8] << "     |\n";
	cout << "\t|    " << wybur[0][6] << "    |\t|    " << wybur[0][7] << "    |\t|    " << wybur[0][8] << "    | |    " << wybur[1][6] << "    |    |    " << wybur[1][7] << "    |    |    " << wybur[1][8] << "    |\n";
	cout << "\t----------------------------------------------------------------------------------------\n\n";
	cout << "\t----------------------------------------------------------------------------------------\n";
	cout << "\t|   \t\t   | " << plansza_max[2] << " |   \t\t   | |   \t\t| " << plansza_max[3] << " |     \t\t|\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|    " << plansza_min[0] << "     |\t|    " << plansza_min[1] << "     |\t|    " << plansza_min[2] << "     | |    " << plansza_min[0] << "     |    |    " << plansza_min[1] << "     |    |    " << plansza_min[2] << "     |\n";
	cout << "\t|    " << wybur[2][0] << "    |\t|    " << wybur[2][1] << "    |\t|    " << wybur[2][2] << "    | |    " << wybur[3][0] << "    |    |    " << wybur[3][1] << "    |    |    " << wybur[3][2] << "    |\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|   \t\t\t\t\t   | |  \t\t\t\t\t|\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|    " << plansza_min[3] << "     |\t|    " << plansza_min[4] << "     |\t|    " << plansza_min[5] << "     | |    " << plansza_min[3] << "     |    |    " << plansza_min[4] << "     |    |    " << plansza_min[5] << "     |\n";
	cout << "\t|    " << wybur[2][3] << "    |\t|    " << wybur[2][4] << "    |\t|    " << wybur[2][5] << "    | |    " << wybur[3][3] << "    |    |    " << wybur[3][4] << "    |    |    " << wybur[3][5] << "    |\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|   \t\t\t\t\t   | |  \t\t\t\t\t|\n";
	cout << "\t|-----------\t------------\t-----------| |-----------    ------------    -----------|\n";
	cout << "\t|    " << plansza_min[6] << "     |\t|    " << plansza_min[7] << "     |\t|    " << plansza_min[8] << "     | |    " << plansza_min[6] << "     |    |    " << plansza_min[7] << "     |    |    " << plansza_min[8] << "     |\n";
	cout << "\t|    " << wybur[2][6] << "    |\t|    " << wybur[2][7] << "    |\t|    " << wybur[2][8] << "    | |    " << wybur[3][6] << "    |    |    " << wybur[3][7] << "    |    |    " << wybur[3][8] << "    |\n";
	cout << "\t----------------------------------------------------------------------------------------\n\n";
}


/**
nazwa: postaw_pionek
opis dzialania:  metoda majaca za zadanie stawiac pionek na planszy
parametry:
x - okresla miejsce na du¿ej planszy
y - okresla, miejsce na ma³ej planszy
z - okresla, postaæ
wartosc zwracana: brak
**/
void Plansza::postaw_pionek(int x, int y, string z)
{
	wybur[x - 1][y - 1] = z;
}


/**
nazwa: sprawdzanie
opis dzialania: metoda sprawdza czy mozna postawic w danym miejscu pionek na planszy
parametry:
x - okresla miejsce na du¿ej planszy
y - okresla, miejsce na ma³ej planszy
wartosc zwracana:
0 - jesli uniemozliwione jest postawienie pionka
1 - jesli mozliwe jest postawienie pionka na danym polu
**/
int Plansza::spr_miejsce(int x, int y)
{
	if (wybur[x - 1][y - 1] == "--")
		return 1;
	else
		return 0;
}

/**
nazwa: spr_remis
opis dzialania: metoda sprawdza jest remis
parametry: brak
wartosc zwracana:
0 - jesli niema wolnego miejsca na planszy
1 - jesli jest wolne miejsca na planszy
**/
int Plansza::spr_remis()
{
	int pom = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (wybur[i][j] == "--")
				pom++;
		}
	}
	if (pom == 0)
		return 1;
	else
		return 0;
}

/**
nazwa: spr_wygrana
opis dzialania: metoda sprawdza czy gracz wygra³
parametry:
z - okresla, postaæ
wartosc zwracana:
0 - jesli niema wygranej
1 - jesli jest wygrana
**/
int Plansza::spr_wygrana(string z)
{
	{
		if (wybur[0][0] == z && wybur[0][1] == z && wybur[0][2] == z && wybur[1][0] == z && wybur[1][1] == z)
			return 1;
		else if (wybur[0][1] == z && wybur[0][2] == z && wybur[1][0] == z && wybur[1][1] == z && wybur[1][2] == z)
			return 1;
		else if (wybur[0][3] == z && wybur[0][4] == z && wybur[0][5] == z && wybur[1][3] == z && wybur[1][4] == z)
			return 1;
		else if (wybur[0][4] == z && wybur[0][5] == z && wybur[1][3] == z && wybur[1][4] == z && wybur[1][5] == z)
			return 1;
		else if (wybur[0][6] == z && wybur[0][7] == z && wybur[0][8] == z && wybur[1][6] == z && wybur[1][7] == z)
			return 1;
		else if (wybur[0][7] == z && wybur[0][8] == z && wybur[1][6] == z && wybur[1][7] == z && wybur[1][8] == z)
			return 1;
		else if (wybur[2][0] == z && wybur[2][1] == z && wybur[2][2] == z && wybur[3][0] == z && wybur[3][1] == z)
			return 1;
		else if (wybur[2][1] == z && wybur[2][2] == z && wybur[3][0] == z && wybur[3][1] == z && wybur[3][2] == z)
			return 1;
		else if (wybur[2][3] == z && wybur[2][4] == z && wybur[2][5] == z && wybur[3][3] == z && wybur[3][4] == z)
			return 1;
		else if (wybur[2][4] == z && wybur[2][5] == z && wybur[3][3] == z && wybur[3][4] == z && wybur[3][5] == z)
			return 1;
		else if (wybur[2][6] == z && wybur[2][7] == z && wybur[2][8] == z && wybur[3][6] == z && wybur[3][7] == z)
			return 1;
		else if (wybur[2][7] == z && wybur[2][8] == z && wybur[3][6] == z && wybur[3][7] == z && wybur[3][8] == z)
			return 1;
		else if (wybur[0][0] == z && wybur[0][3] == z && wybur[0][6] == z && wybur[2][0] == z && wybur[2][3] == z)
			return 1;
		else if (wybur[0][3] == z && wybur[0][6] == z && wybur[2][0] == z && wybur[2][3] == z && wybur[2][6] == z)
			return 1;
		else if (wybur[0][1] == z && wybur[0][4] == z && wybur[0][7] == z && wybur[2][1] == z && wybur[2][4] == z)
			return 1;
		else if (wybur[0][4] == z && wybur[0][7] == z && wybur[2][1] == z && wybur[2][4] == z && wybur[2][7] == z)
			return 1;
		else if (wybur[0][2] == z && wybur[0][5] == z && wybur[0][8] == z && wybur[2][2] == z && wybur[2][5] == z)
			return 1;
		else if (wybur[0][5] == z && wybur[0][8] == z && wybur[2][2] == z && wybur[2][5] == z && wybur[2][8] == z)
			return 1;
		else if (wybur[1][0] == z && wybur[1][3] == z && wybur[1][6] == z && wybur[3][0] == z && wybur[3][3] == z)
			return 1;
		else if (wybur[1][3] == z && wybur[1][6] == z && wybur[3][0] == z && wybur[3][3] == z && wybur[3][6] == z)
			return 1;
		else if (wybur[1][1] == z && wybur[1][4] == z && wybur[1][7] == z && wybur[3][1] == z && wybur[3][4] == z)
			return 1;
		else if (wybur[1][4] == z && wybur[1][7] == z && wybur[3][1] == z && wybur[3][4] == z && wybur[3][7] == z)
			return 1;
		else if (wybur[1][2] == z && wybur[1][5] == z && wybur[1][8] == z && wybur[3][2] == z && wybur[3][5] == z)
			return 1;
		else if (wybur[1][5] == z && wybur[1][8] == z && wybur[3][2] == z && wybur[3][5] == z && wybur[3][8] == z)
			return 1;
		else if (wybur[0][0] == z && wybur[0][4] == z && wybur[0][8] == z && wybur[3][0] == z && wybur[3][4] == z)
			return 1;
		else if (wybur[0][4] == z && wybur[0][8] == z && wybur[3][0] == z && wybur[3][4] == z && wybur[3][8] == z)
			return 1;
		else if (wybur[0][1] == z && wybur[0][5] == z && wybur[1][6] == z && wybur[3][1] == z && wybur[3][5] == z)
			return 1;
		else if (wybur[0][3] == z && wybur[0][7] == z && wybur[2][2] == z && wybur[3][3] == z && wybur[3][7] == z)
			return 1;
		else if (wybur[1][2] == z && wybur[1][4] == z && wybur[1][6] == z && wybur[2][2] == z && wybur[2][4] == z)
			return 1;
		else if (wybur[1][4] == z && wybur[1][6] == z && wybur[2][2] == z && wybur[2][4] == z && wybur[2][6] == z)
			return 1;
		else if (wybur[1][1] == z && wybur[1][3] == z && wybur[0][8] == z && wybur[2][1] == z && wybur[2][3] == z)
			return 1;
		else if (wybur[1][5] == z && wybur[1][7] == z && wybur[3][0] == z && wybur[2][5] == z && wybur[2][7] == z)
			return 1;
		else
			return 0;
	}
}

/**
nazwa: obrut
opis dzialania: metoda obraca plansze
parametry:
x - okresla plansze
y - okresla kierunek
wartosc zwracana: brak
**/
void Plansza::obrut(int x, int y)//1 prawa -1 lewo
{
	if (x == 1)
	{
		string pom[9];
		for (int i = 0; i < 9; i++)
		{
			pom[i] = wybur[0][i];
		}
		if (y == 1)
		{
			wybur[0][0] = pom[6];
			wybur[0][1] = pom[3];
			wybur[0][2] = pom[0];
			wybur[0][3] = pom[7];
			wybur[0][5] = pom[1];
			wybur[0][6] = pom[8];
			wybur[0][7] = pom[5];
			wybur[0][8] = pom[2];
		}
		else
		{
			wybur[0][0] = pom[2];
			wybur[0][1] = pom[5];
			wybur[0][2] = pom[8];
			wybur[0][3] = pom[1];
			wybur[0][5] = pom[7];
			wybur[0][6] = pom[0];
			wybur[0][7] = pom[3];
			wybur[0][8] = pom[6];
		}
	}
	if (x == 2)
	{
		string pom[9];
		for (int i = 0; i < 9; i++)
		{
			pom[i] = wybur[1][i];
		}
		if (y == 1)
		{
			wybur[1][0] = pom[6];
			wybur[1][1] = pom[3];
			wybur[1][2] = pom[0];
			wybur[1][3] = pom[7];
			wybur[1][5] = pom[1];
			wybur[1][6] = pom[8];
			wybur[1][7] = pom[5];
			wybur[1][8] = pom[2];
		}
		else
		{
			wybur[1][0] = pom[2];
			wybur[1][1] = pom[5];
			wybur[1][2] = pom[8];
			wybur[1][3] = pom[1];
			wybur[1][5] = pom[7];
			wybur[1][6] = pom[0];
			wybur[1][7] = pom[3];
			wybur[1][8] = pom[6];

		}
	}
	if (x == 3)
	{
		string pom[9];
		for (int i = 0; i < 9; i++)
		{
			pom[i] = wybur[2][i];
		}
		if (y == 1)
		{
			wybur[2][0] = pom[6];
			wybur[2][1] = pom[3];
			wybur[2][2] = pom[0];
			wybur[2][3] = pom[7];
			wybur[2][5] = pom[1];
			wybur[2][6] = pom[8];
			wybur[2][7] = pom[5];
			wybur[2][8] = pom[2];
		}
		else
		{
			wybur[2][0] = pom[2];
			wybur[2][1] = pom[5];
			wybur[2][2] = pom[8];
			wybur[2][3] = pom[1];
			wybur[2][5] = pom[7];
			wybur[2][6] = pom[0];
			wybur[2][7] = pom[3];
			wybur[2][8] = pom[6];

		}
	}
	if (x == 4)
	{
		string pom[9];
		for (int i = 0; i < 9; i++)
		{
			pom[i] = wybur[3][i];
		}
		if (y == 1)
		{
			wybur[3][0] = pom[6];
			wybur[3][1] = pom[3];
			wybur[3][2] = pom[0];
			wybur[3][3] = pom[7];
			wybur[3][5] = pom[1];
			wybur[3][6] = pom[8];
			wybur[3][7] = pom[5];
			wybur[3][8] = pom[2];
		}
		else
		{
			wybur[3][0] = pom[2];
			wybur[3][1] = pom[5];
			wybur[3][2] = pom[8];
			wybur[3][3] = pom[1];
			wybur[3][5] = pom[7];
			wybur[3][6] = pom[0];
			wybur[3][7] = pom[3];
			wybur[3][8] = pom[6];

		}
	}

}


/**
nazwa: zapis
opis dzialania: metoda zapisuje gre
parametry:
z - okresla, postaæ
wartosc zwracana: brak
**/
void Plansza::zapis(string z)
{
	ofstream zapis("Rezultaty.txt", ios::trunc);
	zapis << z << endl;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 9; j++)
			zapis << plansza_max[i] << " " << plansza_min[j] << " " << wybur[i][j] << endl;
}
/**
nazwa: wczyt
opis dzialania: metoda wczytuje gre
parametry: brak
wartosc zwracana:
0 - plik nie istnjieje
1 - plik istnieje
**/
int Plansza::wczyt()
{
	string z;
	ifstream zapis("Rezultaty.txt", ios::in);
	if (zapis.is_open())
	{

		zapis >> z;
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 9; j++)
				zapis >> plansza_max[i] >> plansza_min[j] >> wybur[i][j];
		return 1;
	}
	else {
		zapis.close();
		cout << "Niema zapisanej gry!!!";
		czekaj(2000);
		return 0;

	}
}