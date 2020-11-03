#ifndef VOYAGE_H_INCLUDED
#define VOYAGE_H_INCLUDED

using namespace std;


class Hebergement{
    string adresse;
    int nombreEtoiles;
    string nom;
public:
    Hebergement(){adresse="";nombreEtoiles=0;nom="";};
    Hebergement(string adresse,int nombreEtoiles,string nom);
    void afficher();
    string getAdresse(){return adresse;};
    int getNombreEtoiles(){return nombreEtoiles;};
    string getNom(){return nom;};
    void setNombreEtoiles(int val){nombreEtoiles=val;};
    void saisir(string ad,int n,string name){adresse=ad;nombreEtoiles=n;nom=name;};
};

class Voyage{
    int id;
    string villeOrigine;
    string villeDestination;
    string dateDepart;
    string dateRetour;
    float prix;
    string nom;
    Hebergement h;
public:
    Voyage(int id,string villeOrigine,string villeDestination,string dateDepart,string dateRetour,float prix,string nom);
    void setHebergement(const Hebergement &h){this->h=h;};
    void setHebergementEtoiles(int val);
    void afficher();
    ~Voyage(){afficher();}
};


#endif // VOYAGE_H_INCLUDED
