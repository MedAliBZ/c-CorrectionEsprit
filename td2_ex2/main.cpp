#include <iostream>
#include <string>
#include "compte.h"

using namespace std;

int main()
{
    Compte A,B;
    int choix;
    float val;
    do{
        cout << "choisir une fonction: " << endl << endl;
        cout << "1- Saisir compte A" << endl;
        cout << "11- Saisir compte B" << endl;
        cout << "2- Retirer argent du compte A" << endl;
        cout << "3- Deposer argent au compte A" << endl;
        cout << "4- Consulter solde du compte A" << endl;
        cout << "44- Consulter solde du compte b" << endl;
        cout << "5- Transferer argent de A a B " << endl;
        cout << "0- Quitter" << endl << endl;

        cin >> choix;

        switch(choix){
            case 1:
                A.saisir();
                break;
            case 11:
                B.saisir();
                break;
            case 2:
                cout << "ecrire la somme a retirer" << endl;
                cin >> val;
                A.retirerArgent(val);
                break;
            case 3:
                cout << "ecrire la somme a deposer" << endl;
                cin >> val;
                A.deposerArgent(val);
                break;
            case 4:
                A.consulterSolde();
                break;
            case 44:
                B.consulterSolde();
                break;
            case 5:
                A.transfererArgent(B);
                break;
            case 0:
                return 0;
                break;
        }
    }
    while(choix!=0);

    return 0;
}
