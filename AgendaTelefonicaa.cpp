#include "AgendaTelefonicaa.h"
#include "PersoanacuEmail.h"
#include "PersoanafaraEmail.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <cstring>

using namespace std;

// functie pentru a adauga o persoana la lista
void AgendaTelefonicaa::AdaugaPersoana(Persoana* persnoua) {
    
  
    listaPersoane.push_back(persnoua);
   
}


// functie pentru a sterge o persoana din lista
void AgendaTelefonicaa::StergePersoana(string nume,string prenume) {
    int index = -1;
    for (int i = 0; i < listaPersoane.size(); i++) {
        if (listaPersoane[i]->getNume() == nume) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        delete listaPersoane[index];
        listaPersoane.erase(listaPersoane.begin() + index);
        cout << "Persoana " << nume << " a fost stearsa din agenda." << endl;
    }
    else {
        cout << "Persoana " << nume << " nu a fost gasita in agenda." << endl;
    }
}

// functie pentru a modifica datele unei persoane
void AgendaTelefonicaa::ModificaPersoana() {
    string nume;
    cout << "Introduceti numele persoanei pe care vreti sa o actualizati:";
    cin >> nume;
    bool modificat = false;
    for (int i = 0; i < listaPersoane.size(); i++) {
        if (listaPersoane[i]->getNume() == nume) {
            cout << "Introduceti noul nume: ";
            string noulnume;
            cin >> noulnume;
            cout << "Introduceti noul prenume: ";
            string noulprenume;
            cin >> noulprenume;
            cout << "Introduceti noul numar de telefon: ";
            string noulnumardetelefon;
            cin >> noulnumardetelefon;


            string noulemail;

            if (dynamic_cast<PersoanacuEmail*>(listaPersoane[i]) != nullptr) {
                cout << "Introduceti noul email:";
                cin >> noulemail;
                PersoanacuEmail* p = dynamic_cast<PersoanacuEmail*>(listaPersoane[i]);
                p->setEmail(noulemail);
            }
                // modificăm numele și numărul de telefon al persoanei
            listaPersoane[i]->setNume(noulnume);
            listaPersoane[i]->setPrenume(noulprenume);
            listaPersoane[i]->setTelefon(noulnumardetelefon);
            modificat = true;
            break;
        }
    }

        if (modificat) {
            cout << "Persoana " << nume << " a fost modificata cu succes.\n";
        }
        else {
            cout << "Persoana " << nume << " nu a fost gasita in agenda.\n";
        }
    
}




void AgendaTelefonicaa::AfiseazaPersoane() {
    if (listaPersoane.empty()) {
        cout << "Lista este goala." << endl;
        return;
    }
    for (auto& persoana : listaPersoane) {
        cout << "Nume: " << persoana->getNume() << endl;
        cout << "Prenume: " << persoana->getPrenume() << endl;
        cout << "Telefon: " << persoana->getTelefon() << endl;
        if (dynamic_cast<PersoanacuEmail*>(persoana) != nullptr) {
            PersoanacuEmail* p = dynamic_cast<PersoanacuEmail*>(persoana);
            cout << "Email: " << p->getEmail() << endl;
        }
        cout << endl;
    }
}



