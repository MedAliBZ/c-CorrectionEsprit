#include <iostream>

using namespace std;

class rectangle{
    public:
    int h=50;
    int l=8;
    int surface();
};

int rectangle::surface(){
    return h*l;
}


int main()
{
    rectangle R;
    cout << R.surface() << endl;
    return 0;
}
