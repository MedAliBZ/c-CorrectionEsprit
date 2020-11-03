#include <iostream>
#include "note.h"

using namespace std;

int main()
{
    Notes N1(10,12,15,11,17,9.5),N2(11.5,13,18,10,12.5),N3;
//    N1.calculMoyenne()>N2.calculMoyenne()?cout << N1.calculMoyenne() << endl:cout << N2.calculMoyenne() << endl;
cout << N1.calculMoyenne() << endl;
cout << N2.calculMoyenne() << endl;
cout << N3.calculMoyenne() << endl;
    return 0;
}
