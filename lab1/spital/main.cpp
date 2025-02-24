#include "pacient.h"
#include "doctor.h"
#include "spital.h"
#include <iostream>
using namespace std;

int main()
{
	Spital sp;
	sp.AddPersoana(new Doctor("Popescu", "Andrei", 30, "chirurgie", 2020, 5));
	sp.AddPersoana(new Doctor("Pop", "Andrei", 36, "ortopedie", 2021, 6));
	sp.AddPersoana(new Pacient("Marinescu", "Ioan", 45, "apendicita", 60));
	sp.AddPersoana(new Pacient("Marin", "Ionut", 59, "fractura", 78));
	sp.AddSectie("chirurgie");
	sp.AddSectie("ortopedie");
	cout << "sectia chirurgie: "; sp.GetDoctoriSectie("chirurgie");
	cout << "sectia ortopedie: ";  sp.GetDoctoriSectie("ortopedie");
	cout << "pacienti apendicita: "; sp.GetPacientiBoala("apendicita");
	cout << "pacienti fractura: "; sp.GetPacientiBoala("fractura");
	sp.PrintPersoane();
}
