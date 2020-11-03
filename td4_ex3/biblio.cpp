#include <iostream>
#include <string>
#include <list>
#include "biblio.h"
#include <algorithm>


using namespace std;

void Bibiliotheque::afficher(){
    for(list<Ouvrage>::iterator it=ensembleOuvrage.begin();it!=ensembleOuvrage.end();++it){
        it->afficher();
        cout << "prix stock: " << to_string(it->totalOuvrage()) << endl;
    }
}

float Bibiliotheque::prixTotal(){
    float prix=0;
    for(list<Ouvrage>::iterator it=ensembleOuvrage.begin();it!=ensembleOuvrage.end();++it){
        prix-=-it->totalOuvrage();
    }
    return prix;
}

list<Ouvrage>::iterator Bibiliotheque::rechercher(int code){
    Ouvrage O;
    for(list<Ouvrage>::iterator it=ensembleOuvrage.begin();it!=ensembleOuvrage.end();++it){
    if(it->getCode()==code)
        return it;
    }
    return ensembleOuvrage.end();
}

void Bibiliotheque::ajouter(Ouvrage O){
    list<Ouvrage>::iterator it=rechercher(O.getCode());
    if(it==ensembleOuvrage.end())
        cout << "hello";
}
