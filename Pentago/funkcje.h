#pragma once

#include"plansza.h"
#include"gracz.h"
#include"komputer.h"

#ifndef funkcje_h
#define funkcje_h

#include"funkcje.h"

void koniec_gry();

void zasady();

void o_autorze();

string wczyt1();

template<class T1>
void czekaj(T1 a);


int menu();


int gra(int menu);


#endif