#include <iostream>
#include <string>
#include "abonne.h"


void Abonne::saisir(){
    cout << "ecrire le nom de l abonne" << endl;
    cin >> nom;
    cout << "ecrire le prenom de l abonne" << endl;
    cin >> prenom;
    cout << "ecrire le numero du telephone de l abonne" << endl;
    cin >> num;
    cout << "ecrire le numero cin de l abonne" << endl;
    cin >> CIN;
    cout << "ecrire le solde de l abonne" << endl;
    cin >> solde;
}


void Abonne::afficher(){
    cout << "nom et prenom: " << nom << " " << prenom << endl;
    cout << "num: " << num << endl << "cin: " << CIN << endl << "solde: " << solde << endl;
}


void Abonne::recharger(float val){
    solde+=val;
}

bool Abonne::consommer(int secondes,float prixMinute){
    const int prixParSeconde = prixMinute/60;
    int prixConsome = secondes*prixParSeconde;

    if(solde>=prixConsome){
	solde-=prixConsome ;
	return true;
	}
     else
	return false;
}
