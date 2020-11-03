#include <iostream>
#include <string>
#include "voyage.h"


Hebergement::Hebergement(string adresse,int nombreEtoiles,string nom){
    this->adresse=adresse;
    this->nombreEtoiles=nombreEtoiles;
    this->nom=nom;
}

void Hebergement::afficher(){
    cout << "Adresse: " << adresse << endl;
    cout << "Nombre d etoiles: " << nombreEtoiles << endl;
    cout << "Nom de l hotel: " << nom << endl;
}


Voyage::Voyage(int id,string villeOrigine,string villeDestination,string dateDepart,string dateRetour,float prix,string nom){
    this->id=id;
    this->villeOrigine=villeOrigine;
    this->villeDestination=villeDestination;
    this->dateDepart=dateDepart;
    this->dateRetour=dateRetour;
    this->prix=prix;
    this->nom=nom;
}

void Voyage::afficher(){
    cout << "id: " << id << endl;
    cout << "villeOrigine: " << villeOrigine << endl;
    cout << "villeDestination: " << villeDestination << endl;
    cout << "date de depart: " << dateDepart << endl;
    cout << "date de retour: " << dateRetour << endl;
    cout << "prix: " << prix << endl;
    cout << "nom: " << nom << endl;
    h.afficher();
}

void Voyage::setHebergementEtoiles(int val){
    h.setNombreEtoiles(val);
}
