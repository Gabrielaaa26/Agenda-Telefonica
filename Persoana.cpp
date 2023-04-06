#include "Persoana.h"
#include "PersoanacuEmail.h"
#include "PersoanafaraEmail.h"
using namespace std;
#include<string>
#include<cstring>




Persoana::Persoana( string nume,  string prenume, string numartelefon) {
	_nume = nume;
	_prenume = prenume;
	_numartelefon = numartelefon;
}

string Persoana::getNume() 
{
	return _nume;
}

 void Persoana::setNume( string nume)
 {
	 _nume = nume;
 }



 void Persoana::setPrenume(  string prenume)
 {
	 _prenume = prenume;
 }

 string Persoana::getPrenume() 
 {
	 return _prenume;
 }

 void Persoana::setTelefon( string numartelefon)
 {
	 _numartelefon = numartelefon;
 }

 string Persoana::getTelefon()
 {
	 return _numartelefon;

 }

 

 void Persoana::Print()
 {
	 cout << "Nume: " << " " << _nume <<" " << "Prenume: " << _prenume << " " << "Numar de Telefon: " << _numartelefon <<endl;
 }



  