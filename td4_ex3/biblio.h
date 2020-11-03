#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

#include <list>
#include "ouvrier.h"

class Bibiliotheque{
private:
    std::list<Ouvrage> ensembleOuvrage;
public:
    void afficher();
    float prixTotal();
    std::list<Ouvrage>::iterator rechercher(int code);
    void ajouter(Ouvrage O);
};

#endif // BIBLIO_H_INCLUDED
