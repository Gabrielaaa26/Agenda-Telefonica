#pragma once
#ifndef PERSOANA_H
#define PERSOANA_H


#include <string.h>
#include<iostream>
#include<cstring>
using namespace std;

class Persoana
{
private: 
	string _nume;
	string _prenume;
	string _numartelefon;

public:
	Persoana();
	Persoana(  string nume, string prenume, string numartelefon);
	void setNume(string nume);
	void setPrenume(string prenume);
	void setTelefon(string numartelefon);
	 virtual void Print();
	 
	
	
	string getNume() ;
	string getPrenume();
	string getTelefon();
	


};
#endif
