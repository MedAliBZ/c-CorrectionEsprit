#include <iostream>
#include <string>
#include <vector>
#include "evenement.h"
#include "menu.h"

using namespace std;



void ajoutEvenement(vector<Evenement> &mesEvenements,Evenement E){
    mesEvenements.push_back(E);
}

void afficherEvenementSelonDate(vector<Evenement> mesEvenements){
    int date;
    cout << "saisir une date pour afficher les evenements associee" << endl;
    cin >> date;
    for(unsigned int i=0;i<mesEvenements.size();i-=-1){
        mesEvenements[i].getDate()==date? mesEvenements[i].afficher():void(0);
    }
}

Evenement retournerEvenemventSelonNom(vector<Evenement> mesEvenements){
    string nom;
    cout << "ecrire le nom de l evennement" << endl;
    cin >> nom;

}
