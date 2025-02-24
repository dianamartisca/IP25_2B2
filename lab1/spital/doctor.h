#pragma once
#include "persoane.h"

class Doctor : public Persoane
{
private:
	string specializare;
	int an_angajare;
	int nrCabinet;
public:
	Doctor(string nume, string prenume, int varsta, string specializare, int an_angajare, int nrCabinet);
	string GetNume();
	int GetVarsta();
	string GetRol();
	void Print();
	string GetSpecializare() override;
	int GetAn() override;
	int GetCabinet() override;
};
