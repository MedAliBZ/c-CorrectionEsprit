#include <iostream>
#include <string>
#include <vector>
#include "evenement.h"
#include "menu.h"

using namespace std;



Evenement::Evenement(){
    date=0;
    lieu="";
    type="";
    nom="";
}

Evenement::Evenement(int date,string nom,string lieu,string type){
    this->date=date;
    this->lieu=lieu;
    this->type=type;
    this->nom=nom;
}

void Evenement::saisirEvenement(){
    cout << "ecrire la date de l evenement" << endl;
    cin >> date;
    cin.ignore();
    cout << "ecrire le nom de l evenement" << endl;
    getline(cin,nom);

    cout << "ecrire le lieu de l evenement" << endl;
    cin >> lieu;

    cout << "ecrire le type de l evenement" << endl;
    cin >> type;
}

void Evenement::afficher(){
    cout << date <<", " << nom << ", " << lieu << ", " << type << endl;
}
