#include <iostream>
#include <string>
#include "Vehicule.h"
#include "Voiture.h"
#include "Avion.h"

using namespace std;

int main()
{
    Vehicule V("BMX",2015,500);
    Voiture Car("Ferrari",2015,30000,4,6,10,35000);
    Avion av1("Tayara",2016,30000,"reaction",300);
    Avion av2("Tayara2",2017,10000,"helice",8000);


    V.calculerPrix(2020);
    Car.calculerPrix(2020);
    av1.calculerPrix(2020);
    av2.calculerPrix(2020);



    V.afficher();
    cout << "---------------------" << endl;
    Car.afficher();
    cout << "---------------------" << endl;
    av1.afficher();
    cout << "---------------------" << endl;
    av2.afficher();

    return 0;
}
