#pragma once

#include"plansza.h"
#include"gracz.h"

#ifndef komputer_h
#define komputer_h

#include"komputer.h"

//klasa pochodna dziedziczaca po bazowej
class Komputer :public Gracz {
public:
	Komputer();//konstruktor
	virtual ~Komputer();//destruktor poliformiczny
	int losowanie();//losuje wartosci
	int losowanie1();//losuje wartosci
	int losowanie2();//losuje wartosci
	int ruch_komputera();//wykonuje ruch 
};

#endif