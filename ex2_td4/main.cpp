#include <iostream>
#include <string>
#include <vector>
#include "evenement.h"
#include "menu.h"

using namespace std;

int main()
{
    int choix;
    vector<Evenement> mesEvenements;
    Evenement E;

    do{
        cout << "choisir une fonction: " << endl << endl;
        cout << "1- Ajoter un evenement" << endl;
        cout << "2- Afficher l ensemble des evenements associes a une date donnee" << endl;
        cout << "3- Retourner un evenement selon un nom donne." << endl;
        cout << "4- " << endl;
        cout << "5- Afficher les evenements" << endl;
        cout << "0- Quitter" << endl << endl;

        cin >> choix;

        switch(choix){
            case 1:
                E.saisirEvenement();
                ajoutEvenement(mesEvenements,E);
                break;
            case 2:
                afficherEvenementSelonDate(mesEvenements);
                break;
            case 3:
                cout << retournerEvenemventSelonNom().
                break;
            case 4:

                break;
            case 5:
                for(unsigned int i=0;i<mesEvenements.size();i++)
                    mesEvenements[i].afficher();
                break;
            case 0:
                return 0;
                break;
        }
    }
    while(choix!=0);

    return 0;
}
