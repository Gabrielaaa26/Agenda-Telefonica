#pragma once
#ifndef AGENDATELEFONICA_H
#define AGENDATELEFONICA_H
 // !AGENDATELEFONICA_H

#include "Persoana.h"
#include<vector>
#include<string>
using namespace std;
class AgendaTelefonicaa
{
private:
	
	vector<Persoana*>listaPersoane;
	

public:
	
	void AdaugaPersoana(Persoana* persnoua);
	void StergePersoana( string nume,string prenume );
	void ModificaPersoana();
	void AfiseazaPersoane() ;
	void  AdaugaPersoanacuConstructor(const Persoana& persoana);

};
#endif
