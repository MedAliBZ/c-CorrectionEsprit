#include <iostream>
#include <string>
#include "class.h"

void Etudiant::saisir(){
    cout << "Ecrire le nom de l etudiant" << endl;
    cin >> nom;
    cout << "Ecrire le prenom de l etudiant" << endl;
    cin >> prenom;
    for(int i=0;i<10;i++){
            do{
                cout << "Ecrire la note "<< i+1 << " de l etudiant" << endl;
                cin >> notes[i];
            }
            while (notes[i]<0 || notes[i]>20);
        }
}


void Etudiant::afficher(){
    cout << "nom: " << nom << endl;
    cout << "prenom: " << prenom << endl;
    cout << "les notes: " << endl;
    for(int i=0;i<10;i++)
        cout << notes[i] << endl;
}


float Etudiant::moyenne(){
    float somme{0};
    for(int i=0;i<10;i++){
        somme+=notes[i];
    }
    return somme/10;
}

bool Etudiant::admis(){
    return moyenne()>=10?true:false;
}

int Etudiant::exae_quo(Etudiant E){
    if(E.moyenne()==moyenne())
        return 0;
    else if(E.moyenne()>moyenne())
        return -1;
    else return 1;
}
