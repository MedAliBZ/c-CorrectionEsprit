#ifndef OUVRIER_H_INCLUDED
#define OUVRIER_H_INCLUDED


#include <iostream>
#include <string>



class Ouvrage{
private:
    int code,nombreExemplaire;
    std::string titre;
    float prixUnitaire;
public:
    Ouvrage(){code=0;nombreExemplaire=0;titre="";prixUnitaire=0;};
    Ouvrage(int code,int nombreExemplaire,std::string titre,float prixUnitaire);
    int getCode(){return code;};
    int getNombreExemplaire(){return nombreExemplaire;};
    std::string getTitre(){return titre;};
    float getPrixUnitaire(){return prixUnitaire;};
    void afficher();
    float totalOuvrage(){return prixUnitaire*nombreExemplaire;};
};

#endif // OUVRIER_H_INCLUDED
