#include <iostream>
using namespace std;
class Shape  {
   public:
      void setWidth(int w) {
         width = w;
      }

      void setHeight(int h) {
         height = h;
      }
int getArea(){return 0;}
   protected:
      int width;
      int height;
};

class Rectangle implements Shape {
   public:
      int getArea() {
         return (width * height);
      }
};

int main() {
   Rectangle Rect;

   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
