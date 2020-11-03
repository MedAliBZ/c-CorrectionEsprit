#ifndef VOITURE_H
#define VOITURE_H

#include <Vehicule.h>


class Voiture : public Vehicule
{
    public:
        Voiture(std::string marque,int dateAchat,float prixAchat,int cylindre,int nbPorte,int puissance,int km);
        void afficher();
        void calculerPrix(int anneActuelle);
    protected:
        int cylindre,nbPorte,puissance,km;
};

#endif // VOITURE_H
