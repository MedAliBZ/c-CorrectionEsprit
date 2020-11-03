#include "Vehicule.h"

Vehicule::Vehicule(std::string marque,int dateAchat,float prixAchat)
{
    this->marque=marque;
    this->dateAchat=dateAchat;
    this->prixAchat=prixAchat;
    this->prixCourant=0;
}

void Vehicule::afficher(){
    std::cout << "marque: " << marque << " date d achat: " << dateAchat << " prix d achat: " << prixAchat << std::endl;
    std::cout << "prix courant: " << prixCourant << std::endl;
}

void Vehicule::calculerPrix(int anneActuelle){
    if(anneActuelle<dateAchat)
       std::cout << "anne actuelle ne doit pas etre inferieur a la date d achat" << std::endl;
    else
        prixCourant=prixAchat-(prixAchat*0.01*(anneActuelle-dateAchat));
}
