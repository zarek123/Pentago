#pragma once

#include"plansza.h"



#ifndef gracz_h
#define gracz_h

#include"gracz.h"



//klasa pochodna dziedziczaca po bazowej
class Gracz :public Plansza
{
protected:
	string symbol1;//nazwa pionka gracza1
	string symbol2;//nazwa pionka gracza2

public:
	Gracz();//konstruktor
	Gracz(string wsymbol1, string wsymbol2) :symbol1(wsymbol1), symbol2(wsymbol2) {};//lista inicjalizacyjna
	virtual~Gracz();//destruktor poliformiczny
	int ruch(string z);//wykonuje ruch
	string symbol();//wypisuje symbol



};

#endif