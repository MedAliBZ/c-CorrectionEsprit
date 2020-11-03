#include "Avion.h"

Avion::Avion(std::string marque,int dateAchat,float prixAchat,std::string type,int heureVol):Vehicule(marque,dateAchat,prixAchat)
{
    this->type=type;
    this->heureVol=heureVol;
}

void Avion::afficher(){
    Vehicule::afficher();
    std::cout << "type: " << type << " heure de vol: " << heureVol << std::endl;
}


void Avion::calculerPrix(int anneActuelle){
    int heureParMille=heureVol/1000;
    int heureParCent=heureVol/100;

    if(anneActuelle<dateAchat)
       std::cout << "anne actuelle ne doit pas etre inferieur a la date d achat" << std::endl;
    else if (marque=="reaction")
        prixCourant=prixAchat-(prixAchat*0.1*heureParMille);
    else
        prixCourant=prixAchat-(prixAchat*0.1*heureParCent);
    if(prixCourant<0)
        prixCourant=0;
}
