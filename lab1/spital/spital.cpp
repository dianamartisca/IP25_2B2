#include "spital.h"
#include <iostream>

void Spital::AddPersoana(Persoane* p)
{
	pers[nrPersoane] = p;
	nrPersoane++;
}

void Spital::AddSectie(string nume)
{
	sectii[nrsectii] = nume;
	nrsectii++;
}

void Spital::GetDoctoriSectie(string numesectie)
{
	for (int i = 0; i < nrPersoane; i++)
	{
		if (pers[i]->GetRol() == "doctor" && pers[i]->GetSpecializare() == numesectie)
			cout << pers[i]->GetNume()<< '\n';
	}
}

void Spital::GetPacientiBoala(string boala)
{
	for (int i = 0; i < nrPersoane; i++)
	{
		if (pers[i]->GetRol() == "pacient" && pers[i]->GetBoala() == boala)
			cout << pers[i]->GetNume() << '\n';
	}
}

void Spital::PrintPersoane()
{
	for (int i = 0; i < nrPersoane; i++)
	{
		pers[i]->Print();
	}
}


