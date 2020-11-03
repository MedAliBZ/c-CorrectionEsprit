#ifndef ABONNE_H_INCLUDED
#define ABONNE_H_INCLUDED

using namespace std;

class Abonne{

private:
    string nom;
    string prenom;
    int num;
    int CIN;
    double solde;

public:
    void saisir();
    void afficher();
    void recharger(float val);
    bool consommer(int secondes=12,float prixMinute=0.18);
};

#endif // ABONNE_H_INCLUDED
