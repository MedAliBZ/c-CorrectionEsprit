#include <iostream>
#include <string>
//#include "abonne.h"


using namespace std;


class student{
int marks=1;
public:
    int* fun(){
    return &marks;
    }
    void notFun(){
    marks=2;
    }
};

int main()
{
//    Abonne a;
//    a.saisir();
//    a.afficher();
//    cout << a.consommer(100,60)<<endl;
//    cout << "-------------" << endl;
//    a.afficher();

    student s;
    int *ptr=s.fun();

    cout << *ptr;
    s.notFun();
    cout << *ptr;
    return 0;
}
