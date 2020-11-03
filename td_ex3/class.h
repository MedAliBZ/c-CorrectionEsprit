#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED


using namespace std;

class Etudiant{
    public:
    string nom;
    string prenom;
    int notes[10]{0};
    void saisir();
    void afficher();
    float moyenne();
    bool admis();
    int exae_quo(Etudiant E);
};


#endif // CLASS_H_INCLUDED
