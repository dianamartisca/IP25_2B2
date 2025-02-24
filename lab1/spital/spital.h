#pragma once
#include "persoane.h"

class Spital
{
private:
	string nume = "Sfantul Spiridon";
	string adresa = "Str. Viorelelor, nr. 17, Iasi, Romania";
	Persoane* pers[100];
	int nrPersoane = 0;
	string sectii[100];
	int nrsectii = 0;

public:
	void AddPersoana(Persoane* p);
	void AddSectie(string nume);
	void GetDoctoriSectie(string numesectie);
	void GetPacientiBoala(string boala);
	void PrintPersoane();
};
