#ifndef VEHICULE_H
#define VEHICULE_H


#include <iostream>
#include <string>

class Vehicule
{
    public:
        Vehicule(std::string marque,int dateAchat,float prixAchat);
        void afficher();
        void calculerPrix(int anneActuelle);

    protected:
        std::string marque;
        int dateAchat;
        float prixAchat,prixCourant;
};

#endif // VEHICULE_H
