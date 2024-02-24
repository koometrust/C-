#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    // Attributes
    string color;
    int year;
    string make;

    // Display attributes
    void displayAttributes() {
        cout << "Display Car Details:" << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Make: " << make << endl;
    }
};

int main() {
    Car myCar;

    myCar.color = "red";
    myCar.year = 2021;
    myCar.make = "Mazda CX 5";

    // Call the method to display car details
    myCar.displayAttributes();

    return 0;
}
