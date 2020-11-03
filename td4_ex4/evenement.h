#ifndef EVENEMENT_H_INCLUDED
#define EVENEMENT_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


class Evenement{
private:
    int date;
    string nom,lieu,type;
public:
    Evenement();
    Evenement(int,string,string,string);
    int getDate()const{return date;};
    string getNom(){return nom;};
    string getLieu(){return lieu;};
    string getType()const{return type;};
    void saisirEvenement();
    void afficher();
};



#endif // EVENEMENT_H_INCLUDED
