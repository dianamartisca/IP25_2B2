#include "Doctor.h"
#include <iostream>
//#include<string>
//using namespace std;

Doctor::Doctor(string nume, string prenume, int varsta, string specializare, int an_angajare, int nrCabinet)
{
	rol = "doctor";
	this->nume = nume;
	this->prenume = prenume;
	this->varsta = varsta;
	this->specializare = specializare;
	this->an_angajare = an_angajare;
	this->nrCabinet = nrCabinet;

}

string Doctor::GetNume()
{
	return nume + ' ' + prenume;
}

int Doctor::GetVarsta()
{
	return varsta;
}

string Doctor::GetRol()
{
	return rol;
}

string Doctor::GetSpecializare()
{
	return specializare;
}

int Doctor::GetAn()
{
	return an_angajare;
}

int Doctor::GetCabinet()
{
	return nrCabinet;
}

void Doctor::Print()
{
	cout << GetNume() << ' ' << GetVarsta() << ' ' << GetSpecializare() << ' ' << GetAn() << ' ' << GetCabinet() << '\n';
}