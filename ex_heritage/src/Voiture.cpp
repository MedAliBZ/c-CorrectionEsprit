#include "Voiture.h"

Voiture::Voiture(std::string marque,int dateAchat,float prixAchat,int cylindre,int nbPorte,int puissance,int km):Vehicule(marque,dateAchat,prixAchat)
{
    this->cylindre=cylindre;
    this->nbPorte=nbPorte;
    this->puissance=puissance;
    this->km=km;
}


void Voiture::afficher(){
    Vehicule::afficher();
    std::cout << "cylindre: " << cylindre << " nombre de portes: " << nbPorte << " puissance: " << puissance << " " << km << " km" << std::endl;
}


void Voiture::calculerPrix(int anneActuelle){
    int kmParDMille=km/10000;

    if(anneActuelle<dateAchat)
       std::cout << "anne actuelle ne doit pas etre inferieur a la date d achat" << std::endl;
    else{
        prixCourant=prixAchat-(prixAchat*0.02*(anneActuelle-dateAchat))-(0.05*(kmParDMille));
        if(marque=="Fiat" || marque=="Renault")
            prixCourant-=0.1*prixAchat;
        else if(marque=="Ferrari" || marque=="Porsche")
            prixCourant-=0.2*prixAchat;
    }
}
