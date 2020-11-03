#include "annee.h"

using namespace std;

void annee::ajoutEvenement(Evenement E){
    mesEvenements.push_back(E);
    sort(mesEvenements.begin(),mesEvenements.end());
}

void annee::afficherEvenementSelonDate(){
    int date;
    cout << "saisir une date pour afficher les evenements associee" << endl;
    cin >> date;
    for(vector<Evenement>::iterator it=mesEvenements.begin();it!=mesEvenements.end();it-=-1){
        (*it).getDate()==date? (*it).afficher():void(0);
    }
}


void annee::afficher(){
    for(vector <Evenement>::iterator it=mesEvenements.begin();it<mesEvenements.end();it++)
        (*it).afficher();
}

Evenement annee::rechercheParNom(string nom){
    Evenement E;
    for(vector<Evenement>::iterator it=mesEvenements.begin();it!=mesEvenements.end();it++){
        if((*it).getNom()==nom)
            E=(*it);
    }
    return E;
}

void annee::sortByType(){
    //I am using a lambda function if it's not working for you please consider changing your compiler version to c++11 or higher from the setting menu
    sort(mesEvenements.begin(),mesEvenements.end(),[](const Evenement &a,const Evenement &b){
         return a.getType() < b.getType();
         });
}
