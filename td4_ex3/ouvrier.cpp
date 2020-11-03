#include "ouvrier.h"

Ouvrage::Ouvrage(int code,int nombreExemplaire,std::string titre,float prixUnitaire){
    this->code=code;
    this->nombreExemplaire=nombreExemplaire;
    this->titre=titre;
    this->prixUnitaire=prixUnitaire;
}

void Ouvrage::afficher(){
    std::cout << "code: " << code << " titre: " << titre << " nombre d exemplaire: " << nombreExemplaire << " prix unitaire: " << prixUnitaire << std::endl;
}


