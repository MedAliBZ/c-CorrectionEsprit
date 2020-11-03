#include "annee.h"

using namespace std;

int main()
{
    Evenement E1(1994,"Creation de CEP Lyon" ,"Lyon", "culturelle"),E2(1994, "Mort d Ayrton Senna" ,"Paris", "politique");
    Evenement E3(1889, "Inauguration tour Eiffel" , "Paris", "scientifique"),E4(1953, "Naissance de John Malkovich", "Egypte", "culturelle");
    Evenement E5(1953, "Naissance de Segolene Royal 1889", "Canada", "politique");


    annee an;
    string nom;

    an.ajoutEvenement(E4);
    an.ajoutEvenement(E1);
    an.ajoutEvenement(E3);
    an.ajoutEvenement(E2);
    an.ajoutEvenement(E5);
    an.afficher();

    cout << endl;

    an.afficherEvenementSelonDate();

    cout << endl;

    cout << "ecrire un nom pour chercher un evenement" << endl;
    cin.ignore();
    getline(cin , nom);

    if(an.rechercheParNom(nom).getNom()=="")
        cout << "cette evenement n existe pas" << endl;
        else
        an.rechercheParNom(nom).afficher();

    cout << endl << "------------------ sorting by type -------------------" << endl << endl;


    an.sortByType();
    an.afficher();



    return 0;
}
