#include "PersoanacuEmail.h"
#include "Persoana.h"
using namespace std;
#include<string>
#include<cstring>




PersoanacuEmail::PersoanacuEmail(string nume, string prenume, string numartelefon, string email) : Persoana(nume, prenume, numartelefon)
{
	_email = email;
}

void PersoanacuEmail::setEmail(string email)
{
	_email = email;
}

 string PersoanacuEmail::getEmail()
{
	return _email;
 }


 void PersoanacuEmail::Print()
 {
	 Persoana::Print();
	 cout << " Email: "<<_email << endl;
 }