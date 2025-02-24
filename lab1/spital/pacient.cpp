#include "Pacient.h"
#include <iostream>
//#include<string>
using namespace std;

Pacient::Pacient(string nume, string prenume, int varsta, string boala, int nr)
{
	rol = "pacient";
	this->nume = nume;
	this->prenume = prenume;
	this->varsta = varsta;
	this->boala = boala;
	nrCamera = nr;
}

string Pacient::GetNume()
{
	return nume + ' ' + prenume;
}

int Pacient::GetVarsta()
{
	return varsta;
}

string Pacient::GetRol()
{
	return rol;
}

string Pacient::GetBoala()
{
	return boala;
}

int Pacient::GetCamera()
{
	return nrCamera;
}

void Pacient::Print()
{
	cout << GetNume() << ' ' << GetVarsta() << ' ' << GetBoala() << ' ' << GetCamera() << '\n';
}