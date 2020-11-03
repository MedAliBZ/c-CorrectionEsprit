#include <iostream>
#include <string>
#include "class.h"

using namespace std;

int main()
{
    Etudiant e,e2;
    e.saisir();
    e.afficher();
    e.admis()?cout << "admis"<< endl:cout << "non admis"<< endl;
    e2.saisir();
    if(e.exae_quo(e2)==-1)
        cout << e2.nom << " a une moyenne superieure";
    else if(e.exae_quo(e2)==1)
        cout << e.nom << " a une moyenne superieure";
    else
        cout << "meme moyenne";
    return 0;
}
