#pragma once
#include "persoane.h"

class Pacient : public Persoane
{
protected:
	string boala;
	int nrCamera;
public:
	Pacient(string nume, string prenume, int varsta, string boala, int nr);
	string GetNume();
	int GetVarsta();
	string GetRol();
	void Print();
	string GetBoala() override;
	int GetCamera() override;
};