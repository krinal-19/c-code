#include <iostream>
using namespace std;

class measure {

  

   public:
    double length;
    double width;
    double height;

    // function to initialize private variables
    void setinput(double len, double wid, double hgt) {
        length = len;
       	width = wid;
        height = hgt;
    }

    double Area() {
        return length * width;
    }

    double Volume() {
        return length * width * height;
    }
};

int main() {

    // create object of Room class
   measure obj1;
   measure obj2;
    // pass the values of private variables as arguments
    obj1.setinput(42.5, 30.8, 19.2);
    obj2.setinput(10,20,30);
    cout << "Area of Room =  " << obj1.Area() << endl;
    cout << "Volume of Room =  " << obj2.Volume() << endl;

    return 0;
}
