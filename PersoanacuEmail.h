#pragma once
#include "Persoana.h"
class PersoanacuEmail :  public Persoana
{
private  : 
	string _email;

public:
	
	PersoanacuEmail(string, string, string, string);
	void setEmail(string email);
	string getEmail();
	 virtual void Print();
	 
};

