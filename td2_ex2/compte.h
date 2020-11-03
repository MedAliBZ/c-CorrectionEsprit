#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED

using namespace std;

class Compte{
    private:
        int numCompte;
        string nomProprietaire;
        float solde;
    public:
//        int getNumCompte();
//        string getNomProprietaire();
//        float getSolde();
//        void setNumCompte(int nvNumCompte);
//        void setNomProprietaire(string nvNom);
//        void setSolde(float nvSolde);
        void saisir();
        bool retirerArgent(float val);
        void deposerArgent(float val);
        void consulterSolde();
        void transfererArgent(Compte &B);
};

#endif // CLASS_H_INCLUDED
