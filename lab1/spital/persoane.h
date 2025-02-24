#pragma once
#include<string>
using namespace std;

class Persoane
{
protected:
	string nume;
	string prenume;
	int varsta;
	string rol;
public:
	virtual string GetNume() = 0;
	virtual int GetVarsta() = 0;
	virtual string GetRol() = 0;
	virtual void Print() = 0;
	virtual int GetCamera() { return 0; };
	virtual string GetBoala() { return "Nu este pacient"; };
	virtual string GetSpecializare() { return "Nu este doctor"; };
	virtual int GetAn() { return 0; };
	virtual int GetCabinet() { return 0; };
};
