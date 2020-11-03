#ifndef ANNEE_H_INCLUDED
#define ANNEE_H_INCLUDED
#include "evenement.h"

using namespace std;

class annee{
private:
    vector<Evenement> mesEvenements;
public:
    void ajoutEvenement(Evenement E);
    void afficherEvenementSelonDate();
    Evenement rechercheParNom(string);
    void sortByType();
    void afficher();
};

inline bool operator<(const Evenement &a,const Evenement &b){return a.getDate() > b.getDate();};


#endif // ANNEE_H_INCLUDED
