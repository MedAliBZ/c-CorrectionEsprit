#include <iostream>
#include <string>
#include "compte.h"

using namespace std;

//int Compte::getNumCompte(){
//    return numCompte;
//}
//
//string Compte::getNomProprietaire(){
//    return nomProprietaire;
//}
//
//float Compte::getSolde(){
//    return solde;
//}
//
//void Compte::setNumCompte(int nvNumCompte){
//    numCompte = nvNumCompte;
//}
//
//void Compte::setNomProprietaire(string nvNom){
//    nomProprietaire = nvNom;
//}
//
//
//void Compte::setSolde(float nvSolde){
//    solde = nvSolde;
//}

void Compte::saisir(){
    int num;
    float sold;
    string nom;

    cout << "ecrire le numero du compte" << endl;
    cin >> num;
    cout << "ecrire le nom du proprietaire" << endl;
    cin.ignore();
    getline(cin,nom);
    cout << "ecrire le solde" << endl;
    cin >> sold;

    solde =sold;
    nomProprietaire=nom;
    numCompte=num;
}

bool Compte::retirerArgent(float val){
    if((solde-val)>=0){
        solde=solde-val;
        return true;
        }
    else
        return false;
}


void Compte::deposerArgent(float val){
    solde=solde+val;
}

void Compte::consulterSolde(){
    cout << "id: " << numCompte << endl;
    cout << "nom: " << nomProprietaire << endl;
    cout << "votre solde est " << solde << endl;
}

void Compte::transfererArgent(Compte &B){
    float val;
    do{
    cout << "ecrire la somme d argent que vous voulez transferer" << endl;
    cin >> val;
    }
    while(!retirerArgent(val));
    B.deposerArgent(val);
}
