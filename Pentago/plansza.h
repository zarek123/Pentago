#pragma once



#ifndef plansza_h
#define plansza_h

#include"plansza.h"


//clasa Bazowa
class Plansza
{
public:
	Plansza();//konstruktor
	Plansza(string p_wybur[4][9]);//konstruktor
	virtual ~Plansza();//destruktor poliformiczny
	void rysuj();//rysuje plansze
	void postaw_pionek(int x, int y, string z);//stawia pionek
	int spr_miejsce(int x, int y);//sprawdza miejsce
	int spr_remis();//sprawdza remis
	int spr_wygrana(string z);//sprawdza wygran¹
	void obrut(int x, int y);//obraca plansze
	void zapis(string z);//zapisuje gre
	int wczyt();//wczytuje gre

protected:
	int plansza_max[4];//wartosci duzej planszy
	int plansza_min[9];//wartosci malej planszy
	string wybur[4][9];//miejsca pionków

};

#endif