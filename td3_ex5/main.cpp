#include <iostream>
#include <string>
#include "voyage.h"

using namespace std;

int main()
{
    Hebergement H1("Boulevard de la Promenade, 8050 Hammamet, Tunisie",5,"Yasmine Beach");
    Hebergement H2("BP437 / Hammamet 8050 / Tunisie",2,"la Badira Hammamet");
    Voyage V1(1,"tunis","Hamamet","1/1/2020","7/1/2020",115.6,"mohamed ali");
    V1.afficher();
    cout << "----------------------" << endl;
    V1.setHebergement(H1);
    V1.afficher();
    cout << "----------------------" << endl;
    V1.setHebergementEtoiles(1);
    return 0;
}
