#ifndef AVION_H
#define AVION_H

#include <Vehicule.h>


class Avion : public Vehicule
{
    public:
        Avion(std::string marque,int dateAchat,float prixAchat,std::string type,int heureVol);
        void afficher();
        void calculerPrix(int anneActuelle);
    protected:
        std::string type;
        int heureVol;
};

#endif // AVION_H
