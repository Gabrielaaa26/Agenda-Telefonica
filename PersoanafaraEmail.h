#pragma once
#include "Persoana.h"
class PersoanafaraEmail : public Persoana
{
public:
	PersoanafaraEmail();
	PersoanafaraEmail(string nume,string prenume,string telefon) : Persoana(nume,prenume,telefon) {}
	
};

